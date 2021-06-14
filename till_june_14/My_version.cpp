#include <iostream>
// #define V
int V;
#define I 32767
int cost[10001][1001] = {{I}};
int T[1001][1001];
int G[1001][1001];
using namespace std;
void PrintMST()
{
    cout << "\nMinimum Spanning Tree Edges (w/ cost)\n" << endl;
    int sum {0};
    for (int i {0}; i < V - 2; i++) {
        int c = G[T[0][i]][T[1][i]];
        cout << "[" << T[0][i] << "]---[" << T[1][i] << "] cost: " << c << endl;
        sum += c;
    }
    cout << endl;
    cout << "Total cost of MST: " << sum << endl;
}

void PrimsMST( int n)
{
    int u;
    int v;
    int min {I};
    int track [V];
    int T[2][V - 2] {0};

    // Initial: Find min cost edge
    for (int i {1}; i < V; i++) {
        track[i] = I;  // Initialize track array with INFINITY
        for (int j {i}; j < V; j++) {
            if (G[i][j] < min) {
                min = G[i][j];
                u = i;
                v = j;
            }
        }
    }
    T[0][0] = u;
    T[1][0] = v;
    track[u] = track[v] = 0;

    // Initialize track array to track min cost edges
    for (int i {1}; i < V; i++) {
        if (track[i] != 0) {
            if (G[i][u] < G[i][v]) {
                track[i] = u;
            } else {
                track[i] = v;
            }
        }
    }

    // Repeat
    for (int i {1}; i < n - 1; i++) {
        int k;
        min = I;
        for (int j {1}; j < V; j++) {
            if (track[j] != 0 && G[j][track[j]] < min) {
                k = j;
                min = G[j][track[j]];
            }
        }
        T[0][i] = k;
        T[1][i] = track[k];
        track[k] = 0;

        // Update track array to track min cost edges
        for (int j {1}; j < V; j++) {
            if (track[j] != 0 && G[j][k] < G[j][track[j]]) {
                track[j] = k;
            }
        }
    }
    PrintMST();
}

int main()
{
    // cout << "Enter the number of vertices" << endl;
    cin >> V;
    // int cost [V][V] {
    //     {I, I, I, I, I, I, I, I},
    //     {I, I, 25, I, I, I, 5, I},
    //     {I, 25, I, 12, I, I, I, 10},
    //     {I, I, 12, I, 8, I, I, I},
    //     {I, I, I, 8, I, 16, I, 14},
    //     {I, I, I, I, 16, I, 20, 18},
    //     {I, 5, I, I, I, 20, I, I},
    //     {I, I, 10, I, 14, 18, I, I},
    // };
    int i;
    int j;
    int n = V;
    // for (i = 1; i <= n; i++)
    // {
    //     int q;
    //     // cout << "Enter number edges to be connected to this vertex\n";
    //     cin >> q;
    //     while (q--)
    //     {
    //         int a, b; cin >> a >> b;
    //         cost[i][a] = b;
    //     }

    // }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cost[i][j];
            if (cost[i][j] == 0)
                cost[i][j] = I;
        }
    }
    PrimsMST(n);
}
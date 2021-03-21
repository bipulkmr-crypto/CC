// #include <iostream>
// #include <map>
// #include <cstdio>
// #include <vector>
// #include <time.h>
// #include <utility>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// using namespace std;
// typedef long long int ll;
// #define mod 1000000007
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define rep(i, n) for (i = 0; i < n; i++)
// #define fu(i, a, n) for (i = a; i <= n; i++)
// #define fd(i, n, a) for (i = n; i >= a; i--)
// #define gi(n) scanf(% d, &n)
// #define gl(n) scanf(% d, &n)
// #define pi(n) printf(% d, n)
// #define pl(n) printf(% lld, n)
// ll n;

// bool good(ll arr[][n],ll row,ll col)
// {
//     ll i,j;
//     rep(i,col)
//     {
//         if(arr[i][j])
//         return false;
//     }
//     for(i=row,j=col;i>=0&&j>=col;i--,j--)
//     {
//         if(arr[i][j])
//         return false;

//     }
//     for(i=row,j=col;j>=0&&i<n;i++,j--)
//     {
//         if(arr[i][j])
//         return false;
//     }
//     return true;
// }
// bool solve(ll arr[][n], ll col)
// {
//     if (col >= n)
//         return true;
//     ll i, j;

//     for (j = 0; j < n; j++)
//     {
//         if (good(arr, j,col))
//         {
//             arr[i][col] = 1;
//         }
//         if (solve(arr,col+ 1))
//             return true;
//         arr[i][col] = 0;
//     }
//     return false;
// }
// int main()
// {
//     cin >> n;
//     ll arr[n][n];ll i,j;
//     rep(i,n)
//     rep(j,n)
//     arr[i][j]=0;
//     if (solve(arr, 0))
//         cout << "YES\n";
//     else
//         cout << "NO\n";
// }
#include<bits/stdc++.h>
// #define N 4
 
/* A utility function to print solution */
void printSolution(int board[N][N])
{
    static int k = 1;
    printf("%d-\n",k++);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
    printf("\n");
}
 
/* A utility function to check if a queen can
be placed on board[row][col]. Note that this
function is called when "col" queens are
already placed in columns from 0 to col -1.
So we need to check only left side for
attacking queens */
bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
 
    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
 
    /* Check upper diagonal on left side */
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return false;
 
    /* Check lower diagonal on left side */
    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return false;
 
    return true;
}
 
/* A recursive utility function to solve N
Queen problem */
bool solveNQUtil(int board[N][N], int col)
{
    /* base case: If all queens are placed
    then return true */
    if (col == N)
    {
        printSolution(board);
        return true;
    }
 
    /* Consider this column and try placing
    this queen in all rows one by one */
    bool res = false;
    for (int i = 0; i < N; i++)
    {
        /* Check if queen can be placed on
        board[i][col] */
        if ( isSafe(board, i, col) )
        {
            /* Place this queen in board[i][col] */
            board[i][col] = 1;
 
            // Make result true if any placement
            // is possible
            res = solveNQUtil(board, col + 1) || res;
 
            /* If placing queen in board[i][col]
            doesn't lead to a solution, then
            remove queen from board[i][col] */
            board[i][col] = 0; // BACKTRACK
        }
    }
 
    /* If queen can not be place in any row in
        this column col then return false */
    return res;
}
 
/* This function solves the N Queen problem using
Backtracking. It mainly uses solveNQUtil() to
solve the problem. It returns false if queens
cannot be placed, otherwise return true and
prints placement of queens in the form of 1s.
Please note that there may be more than one
solutions, this function prints one of the
feasible solutions.*/
void solveNQ(int N)
{

    int board[N][N];
    memset(board, 0, sizeof(board));
 
    if (solveNQUtil(board, 0) == false)
    {
        printf("Solution does not exist");
        return ;
    }
 
    return ;
}
 
// driver program to test above function
int main()
{
        int N;
    std::cin>>N;
    solveNQ(N);

    return 0;
}
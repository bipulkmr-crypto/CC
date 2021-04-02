// // // // 
// // // #include <iostream>
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // typedef long long int ll;
// // // #define  fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// // // #define mod 1000000007
// // // #define pb push_back
// // // #define mp make_pair
// // // #define pii pair<int,int>
// // // #define tiii tuple<int, int, int>
// // // #define pll pair<long long,long long>
// // // #define sii set<int>
// // // #define sll set<long long>
// // // #define vii vector<int>
// // // #define vll vector<long long>
// // // #define vll vector<long long>
// // // #define mii map<int,int>
// // // #define mll map<long long, long long>
// // // #define lob lower_bound
// // // #define upb upper_bound
// // // #define ret return
// // // #define present(s,x) (s.find(x) != s.end())
// // // #define cpresent(s,x) (find(all(s),x) != s.end())
// // // #define ford(container, it) for(auto it = container.begin(); it != container.end(); it++)
// // // #define fors(container, it, a, b) for(auto it = a; it != b; it++)
// // // #define ff first
// // // #define all(v) v.begin(),v.end()
// // // #define ss second
// // // #define rep(i,n) for(i=0;i<n;i++)
// // // #define fu(i,a,n) for(i=a;i<=n;i++)
// // // #define fd(i,n,a) for(i=n;i>=a;i--)
// // // #define gi(n) scanf(%d,&n)
// // // int main()
// // // {
// // //     i
// // // }
// // /*
// // // Sample code to perform I/O:

// // #include <iostream>

// // using namespace std;

// // int main() {
// // 	int num;
// // 	cin >> num;										// Reading input from STDIN
// // 	cout << "Input number is " << num << endl;		// Writing output to STDOUT
// // }

// // // Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// // */

// // // Write your code here
// // #include<bits/stdc++.h>
// // using namespace std;
// // typedef long long int ll;
// // int main()
// // {
// // 	ll t;
// // 	cin>>t;
// // 	while(t--)
// // 	{
// // 		ll n;
// // 		cin>>n;
// // 		ll a,b;
// // 		set<ll> s1;
// // 		set<ll> s2;
// // 		ll i;
// // 		for(i=0;i<n;i++)
// // 		{
// // 			cin>>a>>b;
// // 			ll temp=a;
// // 			a=max(a,b);
// // 			b=min(temp,b);
// // 			if(s1.find(a)==s1.end())
// // 			{
// // 				s1.insert(a);
// // 				s2.insert(b);
// // 			}
// // 			else if(s1.find(b)!=s1.end())
// // 			{
// // 				s2.insert(b);
// // 				// s1.insert(b);
// // 			}
// // 		}
// // 		cout<<s1.size()<<endl;

// // 	}
// // }
// // A Stack based C program to find next
// //  greater element for all array elements.
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #define STACKSIZE 100
 
// // stack structure
// struct stack {
//     int top;
//     int items[STACKSIZE];
// };
 
// // Stack Functions to be used by printNGE()
// void push(struct stack* ps, int x)
// {
//     if (ps->top == STACKSIZE - 1) {
//         printf("Error: stack overflown");
//         getchar();
//         exit(0);
//     }
//     else {
//         ps->top += 1;
//         int top = ps->top;
//         ps->items[top] = x;
//     }
// }
 
// bool isEmpty(struct stack* ps)
// {
//     return (ps->top == -1) ? true : false;
// }
 
// int pop(struct stack* ps)
// {
//     int temp;
//     if (ps->top == -1) {
//         printf("Error: stack underflow n");
//         getchar();
//         exit(0);
//     }
//     else {
//         int top = ps->top;
//         temp = ps->items[top];
//         ps->top -= 1;
//         return temp;
//     }
// }
 
// /* prints element and NGE pair for all elements of
// arr[] of size n */
// void printNGE(int arr[], int n)
// {
//     int i = 0;
//     struct stack s;
//     s.top = -1;
//     int element, next;
 
//     /* push the first element to stack */
//     push(&s, arr[0]);
 
//     // iterate for rest of the elements
//     for (i = 1; i < n; i++) {
//         next = arr[i];
 
//         if (isEmpty(&s) == false)
//         {
//             // if stack is not empty, then pop an element
//             // from stack
//             element = pop(&s);
 
//             /* If the popped element is smaller than next,
//                then a) print the pair b) keep popping while
//                elements are smaller and stack is not empty
//              */
//             while (element < next) {
//                 printf("n %d --> %d", element, next);
//                 if (isEmpty(&s) == true)
//                     break;
//                 element = pop(&s);
//             }
 
//             /* If element is greater than next, then push
//                the element back */
//             if (element > next)
//                 push(&s, element);
//         }
 
//         /* push next to stack so that we can find
//            next greater for it */
//         push(&s, next);
//     }
 
//     /* After iterating over the loop, the remaining
//        elements in stack do not have the next greater
//        element, so print -1 for them */
//     while (isEmpty(&s) == false)
//     {
//         element = pop(&s);
//         next = -1;
//         printf("n %d --> %d", element, next);
//     }
// }
 
// /* Driver code */
// int main()
// {
//     int arr[] = { 11, 13, 21, 3 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printNGE(arr, n);
//     getchar();
//     return 0;
// }
#include <stdbool.h>
#include<stdio.h>
#define siz 100
struct stack
{
	int top;
	int items[siz];
};
void push(struct stack* ps,int x)
{
	if(ps->top==siz-1)
	{
		printf("Eror");
		getchar();
		exit(0);
	}
	else
	{
		ps->top+=1;
		int top=ps->top;
		ps->items[top]=x;
	}
}
bool isEmpty(struct stack* ps)
{
	return(ps->top==-1)?true:false;
}
int  pop(struct stack* ps)
{
	int temp;
	if(ps->top==-1)
	{
		printf("Eroor");
		getchar();
		return 0;
	}
	else
	{
		int top=ps->top;
		temp=ps->items[top];
		ps->top-=1;
		return temp;
	}
}
void pr(int arr[],int n)
{
	int i=0;
	struct stack s;
	s.top();
	int element,next;
	push(&s,arr[0]);
	for(i=1;i<n;i++)
	{
		next=arr[i];
		if(isEmpty(&s)==false)
		{
			element=pop(&s);
			while(element<next)
			{
				printf("%d ",next);
			
			if(isEmpty(&s)==true)
			break;
			element=pop(&s);
			}
			if(element>next)
			push(&s,element);
		}
		push(&s,next);
	}
	while(isEmpty(&s)==false)
	{
		element=pop(&s);
		next=-1;
		printf("%d ",next);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	pr(arr,n);
}

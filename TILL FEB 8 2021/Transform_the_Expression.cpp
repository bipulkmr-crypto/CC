#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int prec(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*'|| c=='/')
    return 2;
    else if(c=='+'|| c=='-')
    return 1;
    else
    return -1;
}
// The main function to convert infix expression
//to postfix expression
string infixToPostfix(string s)
{
    // Your code here
    string ans="";
    int i,len=s.length();
    stack<char> st;
    st.push('N');
    for(i=0;i<len;i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&& s[i]<='Z'))
        {
            ans+=s[i];
        }
        else if(s[i]=='(')
        st.push('(');
        else if(s[i]==')')
        {
            while(st.top()!='N'&& st.top()!='(')
            {
                char c=st.top();
                st.pop();
                ans+=c;
            }
            if(st.top()=='(')
            {
                char c=st.top();
                st.pop();
            }
        }
        else
        {
            while(st.top()!='N'&& prec(s[i])<=prec(st.top()))
            {
                char c=st.top();
                st.top();
                ans+=c;
            }
            st.push(s[i]);
        }
        
    }
    while(st.top()!='N')
    {
        char c=st.top();
        st.pop();
        ans+=c;
    }
    
    return(ans);
}

// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        cout<<infixToPostfix(exp)<<endl;
    }
    return 0;
}
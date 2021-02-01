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
        else if(s[i]==')')
        st.push(')');
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

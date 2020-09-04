#include<iostream>
#include<stack>
using namespace std;


int match(char a,char b)
{
    if(a=='{'&& b=='}')
        return 1;
    if(a=='['&& b==']')
        return 1;
    if(a=='('&& b==')')
        return 1;
    else
        return 0;
}


int main(){
    stack<char> st;
    string s;
    cout<<"enter the string";
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(!match(st.top(),s[i]||st.empty())){
            cout<<"not matching \n";
            break;
        }
        else{
            st.pop();
        }       
    }
    if(st.empty()){
        cout<<"matched and balanced";
    }
return 0;
}
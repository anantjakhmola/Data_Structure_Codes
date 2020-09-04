#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int k;
    s.push(1);
    s.push(2);
    s.push(3);

    s.pop();
    cin>>k;
    if(k%2==0)
    {
        s.push(k);
        cout<<"pushed"<<k<<endl;
    }
    else{
        s.pop();
        cout<<"sorry not able to push the no. try again"<<endl;
    }
    cout<<"Size of stack is : "<<s.size()<<endl;
    return 0;
}
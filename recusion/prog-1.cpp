#include<iostream>
using namespace std;

int func(int  n){
    //int n = 4,count;
    if(n >= 1)
        return n * func(n -1);
    
    else
    {
        return 1;
    }
    
}

int main(){
    int n=5,output=1;
    int n1 =4;
    //cout<<"enter a no to find factorial : ";
    //cin>>n;
    for (int i=n;i>=1;i--)
    {
        output*=i;
        //output=output*i;
    }
    cout<<output;

cout<<endl<<func(n1);

 return 0;   
}
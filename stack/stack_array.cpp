#include<iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
int top = -1;


bool isempty()
{
    if(top==-1)
        return true;
    else
        return false;
}

void push(int value){
    if(top==SIZE-1)
    {
        cout<<"Stack is full";
    }
    else{
    top++;
    A[top]=value;
    }
}

void pop(){
    if(isempty())
        cout<<"Stack is empty";
    else
        top--;
}

void show_top()
{
    if(isempty())
        cout<<"Stack is empty";
    else
        cout<<"top element: "<<A[top]<<"\n";
}

void displayStack(){
    if(isempty())
    {
        cout<<"Stack is empty";
    }
    else
    {
        for (int i;i<=top;i++)
            cout<<A[i]<<" ";
    }
    
}

int main(){
push(2);
push(3);
displayStack();
pop();
show_top();
return 0;
}

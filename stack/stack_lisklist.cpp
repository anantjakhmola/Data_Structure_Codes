#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
Node *top = NULL;

bool isempty(){

    if(top == NULL)
        return true;
    else
        return false;
}


void push(int n){

Node *pointer = new Node();
pointer->data = n;
pointer->link = top;
top = pointer;
}

void pop()
{
    if(isempty())
        cout<<"stack is empty";
    else
    {
        cout<<"popped element is: "<<top->data<<endl;
        Node *pointer = top;
        top = top->link;
        delete(pointer);
    }
}

void show_top(){
    if(isempty())
        cout<<"stack is empty";
    else
    {
        cout<<"element at top "<<top->data;
    }
}
void show(){
    while(top !=NULL)
    {

        cout<<top->data<<" ";
        top=top->link;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    //show();
    pop();
    show_top();
    //pop();
    //show();
    return 0;

}
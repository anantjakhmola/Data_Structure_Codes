#include<iostream>
using namespace std;
#define SIZE 5
int A[SIZE];
//Initially the queue is empty so both front and rear are pointing on same address
int front=-1;
int rear=-1;

bool isEmpty()
{
    if(front==-1&& rear==-1)
        return true;
    else
        return false;
}

void enqueue(int value)
{
    //we can only insert at rear
    //for first element increment both rear and front 
    //for all other cases increment only rear
    if(rear==SIZE-1)
        cout<<"queue is full";
    else
    {
        if(front==-1)
            front = 0;
        rear++;
        A[rear]=value;
    }
}

void dequeue()
{
    //we will increment front for this case
    //when we dequeue last element we have to make front nad rear =-1
    if(isEmpty())
        cout<<"queue is empty";
    else
    {
        if(front==rear)
            front=rear=-1;
        else
        {
            front++;
        }    
    }
}

void showfront(){
    if(isEmpty())
        cout<<"queue is empty";
    else
    {
        cout<<"element at front is"<<A[front];
    }
    
}

void display()
{
    if(isEmpty())
        cout<<"queue is empty";
    else
    {
        for(int i=0;i<=rear;i++)
            cout<<A[i]<<" ";
    }
    
}

int main(){
    enqueue(2);
    enqueue(23);

    display();
    showfront();
    enqueue(444);
    display();
    
}
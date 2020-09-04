#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node *link;
};

Node *front=NULL;
Node *rear=NULL;

bool isEmpty(){
    if(front==NULL&&rear==NULL)
        return true;
    else
        return false;
}

void enqueue(int value)
{
    //create a new node and store its address in pointer ptr
    Node *newptr = new Node();
    newptr->data=value;
    newptr->link =NULL;
    if(front==NULL)
    {
        front = newptr;
        rear = newptr;
    }
    else
    {
        rear->link = newptr;
        rear=newptr;
    }
}

void dequeue(){
    if(isEmpty())
        cout<<"empty";
    else
        if(front==rear)
        {
            free(front);
            front=rear=NULL;
        }
        else
        {
            Node *newptr = front;
            front=front->link;
            free(newptr);
        }
}

void showfront(){
    if(isEmpty())
    cout<<"empty";
    else
    {
        cout<<front->data;
    }
}

void displayqueue(){
    if(isEmpty())
    cout<<"empty";
    else
    {
        Node *newptr = front;
        while(newptr!=NULL)
        {
            cout<<newptr->data<<" ";
            newptr=newptr->link;
        }
    }
}

int main()
{
 int choice, flag=1, value;
 while( flag == 1)
 {
  cout<<"\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
  cin>>choice;
  switch (choice)
  {
  case 1: cout<<"Enter Value:\n";
          cin>>value;
          enqueue(value);
          break;
  case 2: dequeue();
          break;
  case 3: showfront();
          break;
  case 4: displayqueue();
          break;
  case 5: flag = 0;
          break;
  }
 }

 return 0;
}

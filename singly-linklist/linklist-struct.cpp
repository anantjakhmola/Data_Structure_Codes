//linklist using structures

#include<iostream>
using namespace std;
struct Node
{
    int data;  //this will take data

    Node *link;

};
Node * head = NULL; //this is global and it is not pointing to any thing right now so it is null




int main()
{
    Node *pointer =new Node();
    //this will dynamically allocate node and give to point ptr
    // https://youtu.be/Zgzoe8jjidk?list=PLZgR0futJAU3fCGJn2UvRWbkLqmEje_cd&t=220
    pointer->data = 2;
    pointer->link = NULL;
    //this is not pointing to anything right now
    head = pointer; //now the head will point to this node
    cout<<head->data;
    return 0;
}



#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

int main() {
  //creating hollow nodes with null pointer
  Node* head1= NULL;
  Node* head=NULL;
  Node* second = NULL;
  Node* third = NULL;

head1 = new Node();
head = new Node();
second = new Node();
third = new Node();


head1->data =22;
head1->next = head;
//providing data to nodes
  head->data=1;
  head->next= second;


   second->data=2;
  second->next= third;


   third->data=3;
  third->next= NULL;

  while(head1!=NULL)
  {
    cout<<head1->data<<" ";
    head1 = head1->next;
  }
}
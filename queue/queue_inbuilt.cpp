#include<iostream>
#include<queue>
using namespace std;
void displayQueue(queue<int> q)
{
 int n = q.size();

 for(int i=0; i<n;i++)
 {

  cout<<q.front()<<" ";
  q.pop();
 }
 cout<<"\n";

}
int main()
{
    queue<int> q1;

    q1.push(10); 
	q1.push(30); 
	q1.push(20); 
	q1.push(5); 
	q1.push(1);
    cout<<"Elemets in queue are: ";
    displayQueue(q1);
    cout<<"Size: "<<q1.size()<<endl;
    q1.pop();
    q1.push(3);
    cout<<"front: "<<q1.front()<<endl<<"back: "<<q1.back()<<endl;
    
    if(q1.empty()==0)
        cout<<"queue is not empty"<<endl;
    else
        cout<<"queue is empty"<<endl;
    
    cout<<"Size: "<<q1.size();
return 0;
}
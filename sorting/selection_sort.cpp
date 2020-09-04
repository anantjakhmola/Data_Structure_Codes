#include <iostream>
using namespace std;

//Selection Sort Function
int selectionSort ( int A[], int n)
{
int i , j, small, temp;
for( i=0 ; i < n-1 ; i++)
 {
 small = i;
 //finding smallest element in unsorted array
 for( j=i+1 ; j < n ; j++)
  {
  if ( A[j] < A[small] )
  small = j;
  }

 //swapping with left most unsorted element  
 temp = A[i];
 A[i] = A[small];
 A[small] = temp;
 }
}
//Function to display Array elements
void displayArray(int A[],int n)
{
 int i;
 for(i=0;i<n;i++)
  cout<<A[i]<<" "; cout<<"\n";

 }
 //Main Function
 int main() {

 int n;
 cout<<"enter size of array\n"; cin>>n;
 int A[n],e,i,ans;
 cout<<"enter elements of array\n";

 for(i=0;i<n;i++)
 cin>>A[i]; cout<<"Array before sorting\n";

 displayArray(A,n);

 selectionSort(A,n);

 cout<<"Array after sorting\n";
 displayArray(A,n);
 return 0;
}
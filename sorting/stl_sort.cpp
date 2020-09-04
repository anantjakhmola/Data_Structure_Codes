// C++ program to demonstrate default behaviour of 
// sort() in STL. 
//#include <bits/stdc++.h> 
#include<iostream>
#include<algorithm>
using namespace std; 


int main() 
{ 

	//int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
	//char arr[] = {'z','b','c','d','e','f','g','h','i','j','k'}; 
	string arr[] = {"hello","wakanda","forever"};
	cout<<"Size of arr[0]: "<<sizeof(arr)<<endl;

	int n = sizeof(arr)/sizeof(arr[1]); 

    cout<<n;
	sort(arr, arr+n); 
    //sort(first, last);
    // Here,
    // first – is the index (pointer) of the first element in the range to be sorted.
    // last – is the index (pointer) of the last element in the range to be sorted.

	cout << "\nArray after sorting using "
		"default sort is : \n"; 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 

	return 0; 
} 

#include <bits/stdc++.h> 
using namespace std; 

// Function to check the small string 
bool compare(string &s1,string &s2) 
{ 
    //cout<<s1<<endl<<s2<<endl<<"this is s3"<<s3<<endl;
	return s1.size() < s2.size(); 
} 

// Function to print the sorted array of string 
void printArraystring(string str[], int n) 
{ 
	for (int i=0; i<n; i++) 
		cout << str[i] << " "; 
} 

// Driver function 
int main() 
{ 
	string arr[] = {"Ironman", "I", "am"}; 
    string arr1[] = {"Captain","I","am"};
    int lol = arr-arr1;
	int n = sizeof(arr)/sizeof(arr[0]); 
	
    cout<<"faaaccc::"<<lol<<endl;
	// Function to perform sorting 
	sort(arr, arr+n, compare); 

	// Calling the function to print result 
	printArraystring(arr, n); 
	
	return 0; 
} 

#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int num=n,sum=0;
    while(num!=0)
    {
      sum=sum+num%10;
      num=num/10;
    }
    return num;
}
void prime(int a,int b)
{
    vector<bool>p(b+1,true);
    for(int i=0;i<b;i++)
    {
        if(p[i]==true){
            for(int j=i*i;i<=b;j+=i)
            p[j]=false;
        }
    }
    for(int i=a;i<=b;i++)
    {
        if(p[i]&&p[sum(i)])
        cout<<i<<" ";
    }
   
}
int main() {
    int a,b;
    cin>>a>>b;
    prime(a,b);
	return 0;
	
}
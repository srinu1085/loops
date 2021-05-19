#include<bits/stdc++.h>
using namespace std;
int main() 
{
 int n,count=0,a;
 cin>>n;
 int temp=n;
 while(n!=0)
 {
     a=n%10;
     count=count*10+a;
     n=n/10;
 }
 if(temp==count)
 {
     cout<<"palindrome";
 }
 else
 {
     cout<<"not palindrome";
 }

    return 0;
}
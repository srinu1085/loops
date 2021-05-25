#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,s=0;
    cin>>n;
    
    while(n)
    {
        temp=n%10;
        n=n/10;
        s=s*10+temp;
    }
        cout<<s;
}

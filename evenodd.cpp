#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    n=n&1;
    if(n==0)
        cout<<"even";
    else
        cout<<"odd";
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,res=0;
    cin>>n;
    while(1)
    {
        a=n%10;
        res=res+a*a;
        n=n/10;
        if(n==0)
        {
            n=res;
            res=0;
            if(n>=1 && n<=9)
            {
                break;
            }
        }
    }
    if(n==1)
    {
        cout<<"happy";
    }
    else
    {
        cout<<"not happy";
    }
}
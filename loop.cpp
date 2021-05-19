#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,res=0,l=0;
    cin>>n;
    while(n)
    {
        l+=1;
        if(l>1000)
        {
            break;
        }
        r=n%10;
        res=res+r*r;
        n=n/10;
        if(n==0 && res!=1)
        {
            n=res;
            res=0;
        }
    }
        if(n==1 && res==1)
        {
            cout<<"happy number";
        }
        else
        {
            cout<<"not happy number";
        }
}
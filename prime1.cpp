#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i=2;
    cin>>n;
    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            cout<<"not a prime: "<<n;
            count++;
            break;
        }
        i++;
    }
    if(count==0)
    {
        cout<<"prime : "<<n;
    }
    
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i=1;
    cin>>n;
    while(i<=sqrt(n))
    {
        i++;
        if(n%i==0)
        {
            cout<<"not a prime: "<<n;
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"prime : "<<n;
    }
    
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class prime
{
    public:
    int count=0,i=2;
    prime(int n)
    {
        while(i<=sqrt(n))
        {
            if(n%i==0)
            { 
                cout<<"not prime";
                count++;
                break;
            }
            i++;
        }
        if(count==0)
        {
            cout<<"prime";
        }
    }
};
class prime1
{
    public:
    int count=0,i=2;
    prime1(int n)
    {
        while(i<=n/2)
        {
            if(n%i==0)
            { 
                cout<<"not prime";
                count++;
                break;
            }
            i++;
        }
        if(count==0)
        {
            cout<<"prime";
        }
    }
};


int main()
{
    int n,n1;
    cin>>n>>n1;
    prime p=prime(n);
    prime1 p1=prime(n1);
 

    return 0;
}

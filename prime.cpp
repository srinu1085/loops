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

int main()
{
    int n;
    cin>>n;
    prime p=prime(n);
 

    return 0;
}

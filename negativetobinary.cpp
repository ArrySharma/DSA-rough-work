#include <iostream>
using namespace std;

int main()
{
    int n,rem,number;
    int i,a[20];
    cin>>n;
    if(n<0)
    {
        n = -n;
        for(i=0;n!=0;i++)
        {
            rem = n%2;
            a[i] = rem;
            n = n/2;
        }
    }
    else
    {
        for(i=0;n!=0;i++)
        {
            rem = n%2;
            a[i] = rem;
            n = n/2;
        }
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }
}


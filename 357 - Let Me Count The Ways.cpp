#include <iostream>
#include <cstring>
using namespace std;
long long a[30001]={1};
int coin[5]={1,5,10,25,50};
int main()
{
    for(int j=0;j<5;j++)
    {
        for(int i=coin[j];i<=30000;i++)
        {
            a[i]+=a[i-coin[j]];
        }
    }
    int n;
    while(cin>>n)
    {
        if(n<5)
        {
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
            continue;
        }
        cout<<"There are "<<a[n]<<" ways to produce "<<n<<" cents change."<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int prime[10000];
int div(int N)
{
    int DivSum=1;
    for(int i=0;N!=1;i++)
    {
        int x=0;
        if(prime[i]==0)
        {
            return DivSum*2;
        }
        while(N%prime[i]==0)
        {
            x++;
            N/=prime[i];
        }
        DivSum*=x+1;
    }
    return DivSum;
}
int main()
{
    int Num[50000]={0};
    int x=0;
    for(int i=2;i<50000;i++)
    {
        if(Num[i]==0)
        {
            prime[x++]=i;
            for(int j=i;j<50000;j+=i)
            {
                Num[j]=1;
            }
        }
    }
    int N;
    cin>>N;
    while(N--)
    {
        int m,n;
        int num;
        int MaxDiv=0;
        cin>>m>>n;
        for(int i=m;i<=n;i++)
        {
            int Div=div(i);
            if(Div>MaxDiv)
            {
                MaxDiv=Div;
                num=i;
            }
        }
        cout<<"Between "<<m<<" and "<<n<<", "<<num<<" has a maximum of "<<MaxDiv<<" divisors."<<endl;
    }
    return 0;
}

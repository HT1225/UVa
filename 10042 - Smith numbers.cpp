#include <iostream>
#include <cmath>
using namespace std;
int m=0;
int Prime[10000];
int num_total(int num)
{
    int total=0;
    while(num)
    {
        total+=num%10;
        num/=10;
    }
    return total;
}
bool prime(int num)
{
    for(int i=0;i<m && Prime[i]<=ceil(sqrt(num));i++)
    {
        if(num%Prime[i]==0 && num!=2)
        {
            return 0;
            break;
        }
        if(Prime[i+1]>ceil(sqrt(num)))
        {
            return 1;
            break;
        }
    }
}
int SmithNumber_total(int num)
{
    int total=0;
    for(int i=0;i<m && i<=num;i++)
    {
        while(num%Prime[i]==0)
        {
            total+=num_total(Prime[i]);
            num/=Prime[i];
        }
        if(prime(num)==1)
        {
            total+=num_total(num);
            break;
        }
    }
    return total;
}
int main()
{
    int Num[50000]={0};
    for(int i=2;i<50000;i++)
    {
        if(Num[i]==0)
        {
            Prime[m++]=i;
        }
        for(int j=i;j<50000;j+=i)
        {
            Num[j]=1;
        }
    }
    int N;
    cin>>N;
    while(N--)
    {
        int num;
        cin>>num;
        while(++num)
        {
            if(prime(num)!=1)
            {
                if(SmithNumber_total(num)==num_total(num))
                {
                    cout<<num<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

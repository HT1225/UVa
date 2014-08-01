#include <iostream>
using namespace std;
void count(int *a,int i)
{
    while(i)
    {
        a[i%10]++;
        i/=10;
    }
}
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int n;
        cin>>n;
        int a[10]={0};
        for(int i=1;i<=n;i++)
        {
            count(a,i);
        }
        for(int i=0;i<10;i++)
        {
            cout<<a[i]<<(i!=9 ? ' ':'\n');
        }
    }
    return 0;
}

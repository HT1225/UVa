#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
void Itoa(int N,char *s,int ary);
int main()
{
    int N;
    char s[25];
    while(cin>>s && s[0]!='-')
    {
        char ans[25];
        for(int i=0;i<25;i++) ans[i]='-';
        N=atoi(s);
        Itoa(N,ans,3);
        cout<<ans<<endl;
    }
    return 0;
}
void Itoa(int N,char *ans,int ary)
{
    int i=0;
    for(i=0;i<25;i++)
    {
        ans[i]=(N%ary)+48;
        N/=ary;
        if(N==0) break;
    }
    reverse(ans,ans+i+1);
    ans[i+1]=0;
}

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n,t;
    while(cin>>m>>n>>t)
    {
        if(m>n) swap(m,n);
        if(t<m)/*it's possible that Homer can't eat anything*/
        {
            cout<<0<<" "<<t<<endl;
            continue;
        }
        vector<int> a(11000);
        for(int j=0;j<11000;j+=n)
        {
            for(int i=j;i<11000;i+=m)
            {
                if(a[i]==0)a[i]=(i-j)/m+j/n;
            }
        }
        if(a[t])cout<<a[t]<<endl;
        else
        {
            for(int i=0;i<t;i++)
            {
                if(a[t-i])
                {
                    cout<<a[t-i]<<" "<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

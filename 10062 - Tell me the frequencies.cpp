#include <iostream>
using namespace std;
int main()
{
    string s;
    int gg=1;
    while(getline(cin,s))
    {
        if(gg>1) cout<<endl;
        int a[1000]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]]++;
        }
        int x[1000];
        int j=0;
        char c[1000];
        for(int i=0;i<1000;i++)
        {
            if(a[i]!=0)
            {
                x[j]=a[i];
                c[j]=i;
                j++;
            }
        }
        for(int i=1;i<j;i++)
        {
            if(x[i]<x[i-1])
            {
                swap(x[i],x[i-1]);
                swap(c[i],c[i-1]);
                i=0;
            }
            else if(x[i]==x[i-1])
            {
                if(c[i]>c[i-1])
                {
                    swap(c[i],c[i-1]);
                    i=0;
                }
            }
        }
        for(int i=0;i<j;i++)
        {
            cout<<(int)c[i]<<" "<<x[i]<<endl;
        }
        gg++;
    }
    return 0;
}

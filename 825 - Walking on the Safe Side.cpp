#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int blankline=0;
    while(N--)
    {
        if(blankline) cout<<endl;
        int w,e;
        cin>>w>>e;
        int a[500][500]={1};
        int temp,temp2;
        for(int i=0;i<w;i++)
        {
            cin>>temp;
            string s;
            getline(cin,s);
            istringstream sin(s);
            while(sin>>temp2)
            {
                a[temp-1][temp2-1]=-1;
            }
        }

        for(int i=0;i<w;i++)
        {
            for(int j=0;j<e;j++)
            {
                if(a[i][j]==-1) continue;
                if(a[i-1][j]!=-1 && i)
                {
                    a[i][j]+=a[i-1][j];
                }
                if(a[i+1][j]!=-1)
                {
                    a[i][j]+=a[i+1][j];
                }
                if(a[i][j-1]!=-1 && j)
                {
                    a[i][j]+=a[i][j-1];
                }
                if(a[i][j+1]!=-1)
                {
                    a[i][j]+=a[i][j+1];
                }
            }
        }
        cout<<a[w-1][e-1]<<endl;
        blankline=1;
    }
    return 0;
}

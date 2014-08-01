#include <iostream>
using namespace std;
string st[1000][1000];
int main()
{
    int space=0;
    int N;
    while(cin>>N)
    {
        if(space!=0) cout<<endl;
        space=1;
        string s[N+5][2];
        string cpys[N+5][2];
        for(int i=0;i<=N;i++)
        {
            cin>>s[i][0]>>s[i][1];
            cpys[i][0]=s[i][0];
            cpys[i][1]=s[i][1];
        }
        st[0][0]=s[N][1];
        int m=0,n=1;
        int temp,check=1;
        for(int i=0;i>=0 && check==1;i++)
        {
            check=0;
            for(int j=0;j<n ;j++)
            {
                for(int k=0;k<N;k++)
                {
                    if(s[k][0]==st[i][j])
                    {
                        st[i+1][m++]=s[k][1];
                        s[k][1]="x";
                        check=1;
                    }
                    else if(s[k][1]==st[i][j])
                    {
                        st[i+1][m++]=s[k][0];
                        s[k][0]="x";
                        check=1;
                    }
                    if(st[i+1][m-1]==s[N][0])
                    {
                        j=n;temp=i;i=-2;
                        break;
                    }
                }

            }
            n=m;m=0;
        }

        if(check==0)
        {
            cout<<"No route"<<endl;
            continue;
        }
        string store=cpys[N][0];
        for(int i=temp;i>=0;i--)
        {
            for(int j=0;j>=0;j++)
            {
                for(int k=0;k<N;k++)
                {
                    if(st[i][j]==cpys[k][0] && cpys[k][1]==store)
                    {
                        cout<<cpys[k][1]<<" "<<cpys[k][0]<<endl;
                        store=cpys[k][0];
                        j=-2;break;
                    }
                    else if(st[i][j]==cpys[k][1] && cpys[k][0]==store)
                    {
                        cout<<cpys[k][0]<<" "<<cpys[k][1]<<endl;
                        store=cpys[k][1];
                        j=-2;break;
                    }
                }
            }
        }
    }
    return 0;
}

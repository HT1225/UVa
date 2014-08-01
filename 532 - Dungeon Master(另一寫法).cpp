#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int I,J,K;
    char c[100][100][100];
    while(cin>>I>>J>>K && (I!=0 || J!=0 || K!=0))
    {
        int S_I,S_J,S_K;
        int E_I,E_J,E_K;
        int a[31][31][31]={0};
        for(int i=0;i<I;i++)
            for(int j=0;j<J;j++)
                for(int k=0;k<K;k++)
                {
                    cin>>c[i][j][k];
                    if(c[i][j][k]=='.')
                    {
                        a[i][j][k]=-1;
                    }
                    if(c[i][j][k]=='S')
                    {
                        S_I=i; S_J=j; S_K=k;
                        a[i][j][k]=1;
                    }
                    if(c[i][j][k]=='E')
                    {
                        E_I=i; E_J=j; E_K=k;
                        a[i][j][k]=-9;
                    }
                }
        int ans=0;
        for(int num=1;num>=0;num++ )
        {
            int test=0;//判斷有沒有找到E
            for(int i=0;i<I;i++)
                for(int j=0;j<J;j++)
                    for(int k=0;k<K;k++)
                    {
                        if(a[E_I][E_J][E_K]!=-9)
                        {
                            ans=num;
                            num=-2;
                            k=K;j=J;i=I;
                            break;
                        }
                        if(a[i][j][k]==num)
                        {
                            if(a[i][j][k+1]==-1 || a[i][j][k+1]==-9)
                            {
                                a[i][j][k+1]=num+1;
                                test=1;
                            }
                            if(a[i][j][k-1]==-1 || a[i][j][k-1]==-9)
                            {
                                a[i][j][k-1]=num+1;
                                test=1;
                            }
                            if(a[i][j+1][k]==-1 || a[i][j+1][k]==-9)
                            {//cout<<"**"<<endl;
                                a[i][j+1][k]=num+1;
                                test=1;
                            }
                            if(a[i][j-1][k]==-1 || a[i][j-1][k]==-9)
                            {
                                a[i][j-1][k]=num+1;
                                test=1;
                            }
                            if(a[i+1][j][k]==-1 || a[i+1][j][k]==-9)
                            {
                                a[i+1][j][k]=num+1;
                                test=1;
                            }
                            if(a[i-1][j][k]==-1 || a[i-1][j][k]==-9)
                            {
                                a[i-1][j][k]=num+1;
                                test=1;
                            }
int xxx;
    cin>>xxx;
    cout<<num<<endl;
    for(int b=0 ; b<3 ; b++)
    {
        for(int n=0 ; n<4 ; n++)
        {
            for(int m=0 ; m<5 ; m++)
            {
                cout<<setw(3)<<a[b][n][m];
            }cout<<endl;
        }cout<<endl;
    }//cout<<"*"<<count<<endl;
                        }
                    }
                if(test==0) break;
        }
        if(ans==0) cout<<"Trapped!"<<endl;
        else cout<<"Escaped in "<<ans<<" minute(s)."<<endl;
    }
    return 0;
}

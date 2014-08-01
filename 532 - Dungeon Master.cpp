#include <iostream>
using namespace std;
int main()
{
    int I,J,K;
    char c[100][100][100];
    while(cin>>I>>J>>K && (I!=0 || J!=0 || K!=0))
    {
        int S_I,S_J,S_K;
        int E_I,E_J,E_K;
        for(int i=0;i<I;i++)
            for(int j=0;j<J;j++)
                for(int k=0;k<K;k++)
                {
                    cin>>c[i][j][k];
                    if(c[i][j][k]=='S')
                    {
                        S_I=i; S_J=j; S_K=k;
                    }
                    if(c[i][j][k]=='E')
                    {
                        E_I=i; E_J=j; E_K=k;
                        c[i][j][k]='.';
                    }
                }
        int a[27000][3];
        int b[27000][3]={S_I,S_J,S_K};
        int count = 0;
        int n=1;
        int b_num=1;
        while(n)
        {//cout<<"+"<<endl;;
            n=0;
            int a_num=b_num;
            for(int i=0;i<b_num;i++)
                for(int j=0;j<3;j++)
                    a[i][j]=b[i][j];
            b_num=0;
            for(int x=0;x<a_num;x++)
            {//cout<<"a_num="<<a_num<<"bnum="<<b_num<<endl;;
                if(c[ a[x][0] ][ a[x][1] ][ a[x][2]+1 ]=='.')
                {//cout<<"test1"<<endl;
                    b[b_num][0]=a[x][0];
                    b[b_num][1]=a[x][1];
                    b[b_num][2]=a[x][2]+1;
                    b_num++;
                    n=1;
                    c[ a[x][0] ][ a[x][1] ][ a[x][2]+1 ]='x';
                }
                if(c[ a[x][0] ][ a[x][1] ][ a[x][2]-1 ]=='.')
                {//cout<<"test2"<<endl;
                    b[b_num][0]=a[x][0];
                    b[b_num][1]=a[x][1];
                    b[b_num][2]=a[x][2]-1;
                    b_num++;
                    n=1;
                    c[ a[x][0] ][ a[x][1] ][ a[x][2]-1 ]='x';
                }
                if(c[ a[x][0] ][ a[x][1]+1 ][ a[x][2] ]=='.')
                {//cout<<"test3"<<endl;
                    b[b_num][0]=a[x][0];
                    b[b_num][1]=a[x][1]+1;
                    b[b_num][2]=a[x][2];
                    b_num++;
                    n=1;
                    c[ a[x][0] ][ a[x][1]+1 ][ a[x][2] ]='x';
                }
                if(c[ a[x][0] ][ a[x][1]-1 ][ a[x][2] ]=='.')
                {//cout<<"test4"<<endl;
                    b[b_num][0]=a[x][0];
                    b[b_num][1]=a[x][1]-1;
                    b[b_num][2]=a[x][2];
                    b_num++;
                    n=1;
                    c[ a[x][0] ][ a[x][1]-1 ][ a[x][2] ]='x';
                }
                if(c[ a[x][0]+1 ][ a[x][1] ][ a[x][2] ]=='.')
                {//cout<<"test5"<<endl;
                    b[b_num][0]=a[x][0]+1;
                    b[b_num][1]=a[x][1];
                    b[b_num][2]=a[x][2];
                    b_num++;
                    n=1;
                    c[ a[x][0]+1 ][ a[x][1] ][ a[x][2] ]='x';
                }
                if(c[ a[x][0]-1 ][ a[x][1] ][ a[x][2] ]=='.')
                {//cout<<"test6"<<endl;
                    b[b_num][0]=a[x][0]-1;
                    b[b_num][1]=a[x][1];
                    b[b_num][2]=a[x][2];
                    b_num++;
                    n=1;
                    c[ a[x][0]-1 ][ a[x][1] ][ a[x][2] ]='x';
                }
            }
    /*int xxx;
    cin>>xxx;
    for(int b=0 ; b<3 ; b++)
    {
        for(int n=0 ; n<4 ; n++)
        {
            for(int m=0 ; m<5 ; m++)
            {
                cout<<c[b][n][m];
            }cout<<endl;
        }cout<<endl;
    }cout<<"*"<<count<<endl;*/
            if(n==0)
                break;
            count++;
            for(int m=0;m<b_num;m++)
            {
                if(b[m][0]==E_I && b[m][1]==E_J && b[m][2]==E_K)
                {
                    n=0;break;
                }
            }
        }
        if(count==0) cout<<"Trapped!"<<endl;
        else if(count==1) cout<<"Escaped in 1 minute."<<endl;
        else cout<<"Escaped in "<<count<<" minute(s)."<<endl;
    }

    return 0;
}

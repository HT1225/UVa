#include <iostream>
using namespace std;
int main()
{
    for(int game=1;game<10000;game++)
    {
        char c[18][18];
        int dot=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>c[i][j];
                if(c[i][j]=='.') dot++;
            }
        }
        if(dot==64) break;/* 若全都是'.'就結束 */
        cout<<"Game #"<<game<<": ";
        for(int i=0;i<=8;i++)
        {//cout<<endl;
            if(i==8)
            {
                cout<<"no";
                break;
            }
            for(int j=0;j<8;j++)
            {//cout<<i<<"*"<<j<<"*"<<c[i][j];
                if(c[i][j]=='P')
                {
                    if(c[i-1][j-1]=='k' || c[i-1][j+1]=='k')
                    {
                        cout<<"black";
                        i=10;j=8;break;
                    }
                }
                else if(c[i][j]=='p')
                {
                    if(c[i+1][j-1]=='K' || c[i+1][j+1]=='K')
                    {
                        cout<<"white";
                        i=10;j=8;break;
                    }
                }
                else if(c[i][j]=='R')
                {
                    /*R往上*/
                    for(int e=i-1;e>=0;e--)
                    {//c[e][j]='*';
                        if(c[e][j]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*R往下*/
                    for(int e=i+1;e<8;e++)
                    {//c[e][j]='*';
                        if(c[e][j]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*R往左*/
                    for(int e=j-1;e>=0;e--)
                    {//c[i][e]='*';
                        if(c[i][e]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                    /*R往右*/
                    for(int e=j+1;e<8;e++)
                    {//c[i][e]='*';
                        if(c[i][e]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                }
                else if(c[i][j]=='r')
                {
                    /*r往上*/
                    for(int e=i-1;e>=0;e--)
                    {
                        if(c[e][j]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*r往下*/
                    for(int e=i+1;e<8;e++)
                    {
                        if(c[e][j]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*r往左*/
                    for(int e=j-1;e>=0;e--)
                    {
                        if(c[i][e]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                    /*r往右*/
                    for(int e=j+1;e<8;e++)
                    {
                        if(c[i][e]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                }
                else if(c[i][j]=='B')
                {
                    /*B往左上*/
                    for(int e=i-1,f=j-1 ; e>=0&&f>=0 ; e--,f--)
                    {//cout<<"*+*"<<e<<"@"<<f<<"@"<<c[e][f]<<endl;
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*B往右上*/
                    for(int e=i-1,f=j+1 ; e>=0&&f<8 ; e--,f++)
                    {
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*B往左下*/
                    for(int e=i+1,f=j-1 ; e<8&&f>=0 ; e++,f--)
                    {
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*B往右下*/
                    for(int e=i+1,f=j+1 ; e<8&&f<8 ; e++,f++)
                    {
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                }
                else if(c[i][j]=='b')
                {
                    /*b往左上*/
                    for(int e=i-1,f=j-1 ; e>=0&&f>=0 ; e--,f--)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*b往右上*/
                    for(int e=i-1,f=j+1 ; e>=0&&f<8 ; e--,f++)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*b往左下*/
                    for(int e=i+1,f=j-1 ; e<8&&f>=0 ; e++,f--)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*b往右下*/
                    for(int e=i+1,f=j+1 ; e<8&&f<8 ; e++,f++)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                }
                else if(c[i][j]=='Q')
                {
                    /*Q往上*/
                    for(int e=i-1;e>=0;e--)
                    {
                        if(c[e][j]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*Q往下*/
                    for(int e=i+1;e<8;e++)
                    {
                        if(c[e][j]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*Q往左*/
                    for(int e=j-1;e>=0;e--)
                    {
                        if(c[i][e]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                    /*Q往右*/
                    for(int e=j+1;e<8;e++)
                    {
                        if(c[i][e]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                    /*Q往左上*/
                    for(int e=i-1,f=j-1 ; e>=0&&f>=0 ; e--,f--)
                    {
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*Q往右上*/
                    for(int e=i-1,f=j+1 ; e>=0&&f<8 ; e--,f++)
                    {
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*Q往左下*/
                    for(int e=i+1,f=j-1 ; e<8&&f>=0 ; e++,f--)
                    {
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*Q往右下*/
                    for(int e=i+1,f=j+1 ; e<8&&f<8 ; e++,f++)
                    {
                        if(c[e][f]=='k')
                        {
                            cout<<"black";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                }
                else if(c[i][j]=='q')
                {
                    /*q往上*/
                    for(int e=i-1;e>=0;e--)
                    {
                        if(c[e][j]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*q往下*/
                    for(int e=i+1;e<8;e++)
                    {
                        if(c[e][j]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][j]!='.') break;
                    }
                    /*q往左*/
                    for(int e=j-1;e>=0;e--)
                    {
                        if(c[i][e]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                    /*q往右*/
                    for(int e=j+1;e<8;e++)
                    {
                        if(c[i][e]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[i][e]!='.') break;
                    }
                    /*q往左上*/
                    for(int e=i-1,f=j-1 ; e>=0&&f>=0 ; e--,f--)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*q往右上*/
                    for(int e=i-1,f=j+1 ; e>=0&&f<8 ; e--,f++)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*q往左下*/
                    for(int e=i+1,f=j-1 ; e<8&&f>=0 ; e++,f--)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                    /*q往右下*/
                    for(int e=i+1,f=j+1 ; e<8&&f<8 ; e++,f++)
                    {
                        if(c[e][f]=='K')
                        {
                            cout<<"white";
                            i=10;j=8;break;
                        }
                        else if(c[e][f]!='.') break;
                    }
                }
                else if(c[i][j]=='N')
                {
                    if(c[i-1][j-2]=='k' || c[i-1][j+2]=='k' || c[i-2][j-1]=='k' || c[i-2][j+1]=='k'
                        || c[i+1][j-2]=='k' || c[i+1][j+2]=='k' || c[i+2][j-1]=='k' || c[i+2][j+1]=='k')
                    {
                        cout<<"black";
                        i=10;j=8;break;
                    }
                }
                else if(c[i][j]=='n')
                {
                    if(c[i-1][j-2]=='K' || c[i-1][j+2]=='K' || c[i-2][j-1]=='K' || c[i-2][j+1]=='K'
                        || c[i+1][j-2]=='K' || c[i+1][j+2]=='K' || c[i+2][j-1]=='K' || c[i+2][j+1]=='K')
                    {
                        cout<<"white";
                        i=10;j=8;break;
                    }
                }

            }
        }
        cout<<" king is in check."<<endl;
    }
    return 0;
}

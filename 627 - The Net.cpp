#include <iostream>
#include <sstream>
using namespace std;
void run(int a[][1000],int,int);
int router_num;
int main()
{
    while(cin>>router_num)
    {
        cout<<"-----"<<endl;
        int Net[router_num+2][1000];
        for(int i=0;i<router_num+2;i++)
            for(int j=0;j<router_num+2;j++)
                Net[i][j]=0;
        int ID,temp;
        char c;
        for(int i=0;i<router_num;i++)
        {
            cin>>ID;
            string s;
            getline(cin,s);
            if(s.size()==1) continue;
            istringstream sin(s);
            char c;
            while(sin>>c)
            {
                sin>>temp;
                Net[ID][temp]=1;
            }
        }
        int connect_num;
        cin>>connect_num;
        int starting,ending;
        for(int i=0;i<connect_num;i++)
        {
            cin>>starting>>ending;
            run(Net,starting,ending);
        }
    }
    return 0;
}
void run(int a[][1000],int starting,int ending)
{
    int tempa[router_num+2][router_num+2];
    for(int i=0;i<router_num+2;i++)
        for(int j=0;j<router_num+2;j++)
            tempa[i][j]=a[i][j];
    int b[100][1000]={starting};
    int m,n=1;
    int i;
    for(i=1;i>=0;i++)
    {
        m=n;
        n=0;
        for(int j=0;j<m;j++)
        {
            int ID=b[i-1][j];
            for(int k=1;k<=router_num;k++)
            {
                if(tempa[ID][k])
                {
                    b[i][n++]=k;
                    if(k==ending)
                    {
                        m=0;
                        break;
                    }
                    tempa[ID][k]=0;
                }
            }
        }
        if(!n)
        {
            cout<<"connection impossible"<<endl;
            return;
        }
        if(!m) break;
    }
    int temp=ending;
    int route[1000]={temp};
    int con=0;
    for(int j=i-1;j>=0;j--)
    {
        for(int k=0;k>=0;k++)
        {
            int ID=b[j][k];
            if(a[ID][temp])
            {
                temp=ID;
                route[con++]=temp;
                break;
            }
        }
    }
    for(int i=con-1;i>=0;i--)
    {
        cout<<route[i]<<" ";
    }
    cout<<ending<<endl;
}

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int N;
    while(cin>>N)
    {

        int tem[N],x=N,n=N;
        int a[N];
        cin>>a[0];
        if(N==1) //特殊測資
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            for(int i=1;i<N;i++)
            {
                cin>>a[i];
                tem[i-1]=abs(a[i]-a[i-1]);
            }
            N--;
            while(x) //找出每個數之間的差是否是1到N-1
            {
                for(int i=0;i<=n-1;i++)
                {
                    if(i==n-1)
                    {
                        cout<<"Not jolly"<<endl;
                        x=0;
                        break;
                    }
                    if(tem[i]==N)
                    {
                        N--;
                        break;
                    }
                }
                if(N==0)
                {
                    cout<<"Jolly"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

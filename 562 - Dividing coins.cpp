#include <iostream>
#include <cstdlib>
using namespace std;
int store[1000000]={0};
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int m;
        cin>>m;
        int a[m];
        int sum=0;
        int board[50001]={1};
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        int x=1;
        int mini=sum;
        for(int i=0;i<m;i++)
        {
            int store_size=x;
            for(int j=0;j<store_size;j++)
            {
                int temp=a[i]+store[j];
                if(board[temp]==0)
                {
                    board[temp]=1;
                    store[x]=temp;
                    mini=min(mini,abs(temp-(sum-temp)));
                    x++;
                }
            }
        }
        cout<<mini<<endl;
    }
    return 0;
}

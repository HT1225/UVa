#include <iostream>
using namespace std;
int main()
{
    int N;
    while(cin>>N && N!=0)
    {
        int sum=0;
        for(int i=1;i<=N;i++)
        {
            sum+=i*i;
        }
        cout<<sum<<endl;
    }
    return 0;
}

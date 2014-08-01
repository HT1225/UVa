#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b && a!=-1 && b!=-1)
    {
        int tem1=abs(b-a);
        int tem2=100-abs(b-a);
        if(tem1>tem2)
        {
            cout<<tem2<<endl;
        }
        else
        {
            cout<<tem1<<endl;
        }
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int e,f,c;
        cin>>e>>f>>c;
        e+=f;
        int ans=0;
        while(e/c)
        {
            ans+=e/c;
            e=e/c+e%c;
        }
        cout<<ans<<endl;
    }
    return 0;
}

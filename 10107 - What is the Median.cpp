#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i=0;
    vector<int> a(1000);
    a.resize(0);
    while(cin>>a[i])
    {
        a.push_back(a[i]);
        i++;
        sort(a.begin(),a.end());
        int s=i/2;
        if(i%2==1) cout<<a[s]<<endl;
        else cout<<(a[s-1]+a[s])/2<<endl;
    }
    return 0;
}

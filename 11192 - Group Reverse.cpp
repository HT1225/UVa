#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    while(cin>>N && N!=0)
    {
        string s;
        string ans="";
        cin>>s;
        for(int i=0;i<s.size();i+=(s.size()/N))
        {
            string ss=s.substr(i,(s.size()/N));
            reverse(ss.begin(),ss.end());
            ans+=ss;
        }
        cout<<ans<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cin.get();
    while(N--)
    {
        string s;
        getline(cin,s);
        int x=1;
        while(x)
        {
            x=0;
            if(s.find("()")<s.size())
            {
                s.erase(s.find("()"),2);
                x=1;
            }
            if(s.find("[]")<s.size())
            {
                s.erase(s.find("[]"),2);
                x=1;
            }

        }
        if(s!="") cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}

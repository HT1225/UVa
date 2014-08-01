#include <iostream>
using namespace std;
int main()
{
    string cs;
    string s="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    while(getline(cin,cs))
    {
        for(int i=0;i<cs.size();i++)
        {
            if(cs[i]!=' ')
            {
                cs[i]=s[s.find(cs[i])-2];
            }
        }
        cout<<cs<<endl;
    }
    return 0;
}

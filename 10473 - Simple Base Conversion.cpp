#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    char s[20];
    while(cin>>s && s[0]!='-')
    {
        if(s[1]=='x')
        {
            s[1]='0';
            cout<<dec<<atoi(s)<<endl;
        }
        else
        {
            cout<<"0x"<<hex<<uppercase<<atoi(s)<<endl;
        }
    }
    return 0;
}

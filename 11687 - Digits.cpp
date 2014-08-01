#include <iostream>
#include <sstream>
using namespace std;
int dcount(long long int a)
{
    int temp=0;
    if(!a) return 1;
    while(a)
    {
        a/=10;
        temp++;
    }
    return temp;
}
int main()
{
    string s;
    long long int a;
    while(cin>>s && s!="END")
    {
        stringstream ss;
        ss<<s;
        ss>>a;
        int x1=a,x2=dcount(a);
        int con=0;
        while(x1!=x2)
        {
            x1=x2;
            x2=dcount(x2);
            con++;
        }
        cout<<++con<<endl;
    }
    return 0;
}

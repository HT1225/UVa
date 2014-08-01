#include <iostream>
using namespace std;
int main()
{
    string s="WHQESTX";
    double a[7]={1,1/2.,1/4.,1/8.,1/16.,1/32.,1/64.};
    string cs;
    while(getline(cin,cs) && cs!="*")
    {
        int sum=0;
        double con=0;
        for(int i=0;i<cs.size();i++)
        {
            if(cs[i]=='/')
            {
                if(con==1) sum++;
                con=0;
            }
            else
                con+=a[s.find(cs[i])];
        }
        cout<<sum<<endl;
    }
    return 0;
}

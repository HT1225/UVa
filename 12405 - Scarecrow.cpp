#include <iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int n=1;n<=N;n++)
    {
        int a;
        cin>>a;
        char c;
        cin.get(c);//讀換行記號
        string s;
        getline(cin,s);
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                sum++;
                i+=2;
            }
        }
        cout<<"Case "<<n<<": "<<sum<<endl;

    }
    return 0;
}

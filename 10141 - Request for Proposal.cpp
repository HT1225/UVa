#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main()
{
    /*ifstream fin;
    fin.open("新文字文件.txt");
    #define cin fin*/
    int n,p;
    int testime=1;
    while(cin>>n>>p && (n!=0 && p!=0) )
    {
        string s_cout;
        double snum=0;
        double sprice=0;
        string s;
        char c;
        cin.get(c);
        for(int i=0;i<n;i++)
        {//cout<<"test"<<endl;
            getline(cin,s);
            /*while(cin>>s)
            {
                cin.get(c);
                if(c=='\n') break;
            }*/
        }

        //cout<<"*ok"<<endl;
        for(int j=0;j<p;j++)
        {
            string sk;
            string tem;
            /*while(cin>>tem)
            {
                sk+=tem;
                cin.get(c);
                if(c=='\n') break;
                else if(c==' ') sk+=" ";
            }*/
            getline(cin,sk);
            double price,num;
            cin>>price>>num;
            if(snum<num)
            {
                snum = num;
                sprice = price;
                s_cout = sk;
            }
            else if(snum==num)
            {
                if(sprice>price)
                {
                    sprice = price;
                    s_cout = sk;
                }
            }
            cin.get(c);
            for(int i=0;i<num;i++)
            {
                getline(cin,s);
                /*while(cin>>s)
                {
                    cin.get(c);
                    if(c=='\n') break;
                }*/
            }
            //cout<<sk<<"*"<<s_cout<<endl;
        }
        if(testime>1) cout<<endl;
        cout<<"RFP #"<<testime<<endl;
        cout<<s_cout<<endl;
        testime++;

    }
    return 0;
}

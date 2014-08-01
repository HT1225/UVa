#include <iostream>
using namespace std;
int main()
{
    int X,Y,temx;
    int x0,y0,gox,goy;
    char c,s;
    cin>>X>>Y;
    while(cin>>x0>>y0>>c)
    {
        if(c=='E')
        {
            gox=1;goy=0;
            //cout<<gox<<"*"<<goy<<endl;
        }
        else if(c=='W')
        {
            gox=-1;goy=0;
        }
        else if(c=='S')
        {
            gox=0;goy=-1;
        }
        else if(c=='N')
        {
            gox=0;goy=1;
        }
        cin.get(c);
        while(cin.get(c))
        {
            if(c=='\n')
            {
                cout<<x0<<" "<<y0<<" ";
                if(gox==1&&goy==0) cout<<"E"<<endl;
                else if(gox==-1&&goy==0) cout<<"W"<<endl;
                else if(gox==0&&goy==-1) cout<<"S"<<endl;
                else if(gox==0&&goy==1) cout<<"N"<<endl;
                break;
            }
            //cout<<"c="<<c<<endl;
            if(c=='F')
            {
                if(x0>=0 && gox>0) x0+=gox;
                if(y0>=0 && goy>0) y0+=goy;
                if(x0<X && gox<0) x0+=gox;
                if(y0<Y && goy<0) y0+=goy;

                cout<<"x0="<<x0<<"y0"<<y0<<endl;
            }
            else if(c=='R')
            {
                temx=gox;
                gox=goy;
                goy=-temx;
                cout<<"gox="<<gox<<"goy="<<goy<<endl;
            }
            else if(c=='L')
            {
                temx=gox;
                gox=-goy;
                goy=temx;
                cout<<"gox="<<gox<<"goy="<<goy<<endl;
            }
        }
    }
    return 0;
}

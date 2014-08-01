#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double n,p;
    while(cin>>n>>p)
    {
        cout<<fixed<<setprecision(0)<<pow(p,1/n)<<endl; // 要記得四捨五入不然會wa
    }
    return 0;
}

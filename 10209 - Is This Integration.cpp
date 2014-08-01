#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    while(cin>>a)
    {
        double pi=2.0*acos(0.0);
        double a1,a2,a3;
        double circle=a*a*pi;
        a3=4*(a*a-(circle/2-(circle/3-a*a*pow(3,0.5)/4)));
        a1=2*(circle/2-a*a)-(a*a-a3);
        a2=(a*a-a3)-a1;
        cout<<fixed<<setprecision(3)<<a1<<" "<<a2<<" "<<a3<<endl;
    }
    return 0;
}

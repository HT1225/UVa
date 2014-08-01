#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a,b;
    char c;
    while(cin >> a >> c >> b && (a||b))
    {
        double ans=fabs(b*6-(a*30+(b/12)*6));
        if(ans>=360) ans-=360;
        else if(ans>180) ans=360-ans;
        cout<<fixed<<setprecision(3)<<ans<<endl;
    }
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int num;
        cin>>num;
        int man[num];
        int sum=0;
        for(int i=0;i<num;i++)
        {
            cin>>man[i];
            sum+=man[i];
        }
        double avg=sum/num;
        int con=0;
        for(int i=0;i<num;i++)
        {
            if(man[i]>avg) con++;
        }
        cout<<fixed<<setprecision(3)<<100.*con/num<<"%"<<endl;
    }
    return 0;
}

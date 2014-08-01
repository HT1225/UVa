#include <iostream>
using namespace std;
void change(int &a,int &b)//兩數交換
{
    int tema=a;
    a=b;
    b=tema;
}
void compare(int a[],int n)//排大小
{
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            change(a[i],a[i-1]);
            i=0;
        }
    }
}
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int n;
        cin>>n;
        int address[n];
        for(int i=0;i<n;i++)
        {
            cin>>address[i];
        }
        compare(address,n);
        int total=0;
        for(int i=1;i<n;i++)
        {
            total+=address[i]-address[i-1];
        }
        cout<<2*total<<endl;
    }
    return 0;
}

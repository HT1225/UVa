#include <iostream>
using namespace std;
int compare(int a,int b,int c)  /// ����j�p���
{
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}
int main()
{
    int a[4][4];  ///  a[�ĴX�ӽc�l][1�OBrown//2�OGreen//3�OClear]
    int i=1,j=1;
    int G,B,C;
    while(cin>>a[i][j])
    {
        int total=0;
        if(j==3)
        {
           j=0;
           i++;
        }
        j++;
        if(i>3)
        {
            if(compare(a[1][1],a[2][1],a[3][1])=a[][])

        }


    }

    return 0;
}

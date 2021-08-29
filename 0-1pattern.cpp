//to  print a 0-1 pattern
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value to print 0-1 pattern\n";
    cin>>n;
    for(int i=1;i<=n;i++)              //  OR  //     
    {
        for(int j=1;j<=i;j++)
        {
            if((i-j)%2==0)                              //if((i+j)%2==0)
            {                                           //{
                cout<<"1";                              //cout<<"1";
            }                                           //}
            else                                        //else
            {                                           //{
                cout<<"0";                              //cout<<"0";
            }                                           //}
        }
        cout<<endl;
    }
    getch();
    return 0;
}
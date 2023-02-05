#include<iostream>
using namespace std;
main()
{
    bool flag=false;
    string array[4];
    for(int i=0;i<4;i++)
    {
        cin>>array[i];
    }
    for(int j=0;j<4;j++)
    {
        if(array[0]==array[j])
        {
            flag=true;
        }
        else
        flag=false;
    }
    cout<<flag;
}
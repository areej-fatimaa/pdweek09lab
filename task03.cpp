#include<iostream>
using namespace std;
main()
{
    string str;
    bool iseven=false;
    cout<<"string btao";
     int idx=0;
    getline(cin,str);
    while(str[idx]!='\0')
    {
        idx++;
    }
    if(idx%2==0)
    {
       iseven=true;
    }
    else 
    {
        iseven=false;
    }
    cout<<iseven;
}
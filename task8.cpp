#include<iostream>
using namespace std;
main()
{
    int size,count;
    cout<<"Enter size";
    cin>>size;
    string array[size];
    count=size*2;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter array:";
        cin>>array[i];
    }
    for(int j=1;j<size;j++)
    {
       if(array[j-1]!=array[j])
       {
         count++;
       }
    }
    cout<<count;
}
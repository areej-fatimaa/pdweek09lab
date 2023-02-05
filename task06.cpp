#include<iostream>
using namespace std;
main()
{
    int size=0;
    cout<<"enter size";
    cin>>size;
    int array[size];
    int transformation;
    cout<<"enter no of times even odd transformation to be done:";
    cin>>transformation;
    for(int i=0;i<size;i++)
    {
    cout<<"enter the array";
    cin>>array[i];
    }
    for(int j=0;j<size;j++)
    {
            if(array[j]%2==0)
            {
                array[j]=array[j]-(2*transformation);
            }
            else if(array[j]%2!=0)
            {
                array[j]=array[j]+(2*transformation);
            }
             cout<<array[j]<<",";
     }
     
   
}
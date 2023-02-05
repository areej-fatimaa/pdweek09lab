#include<iostream>
using namespace std;
main()
{
    string fruitname;
    int quantity,tprice;
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    cout<<"enter fruit name";
    cin>>fruitname;
    cout<<"enter quantity";
    cin>>quantity;
    for(int i=0;i<4;i++)
    {
        if(fruitname==fruit[i])
        {
            tprice=quantity*price[i];
        }
    }
    cout<<"price of fruit is:"<<tprice;
}
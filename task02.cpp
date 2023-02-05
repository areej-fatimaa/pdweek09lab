#include<iostream>
using namespace std;
main()
{
    int price=500;
    int discount =0;
    string movie[5]={"gladiator","starwars","terminator","takinglives","tombrider"};
    string moviename;
    cout<<"enter movie name:";
    cin>>moviename;
    for(int i=0;i<5;i++)
    {
        if(moviename==movie[i]&&i%2!=0)
        {
            discount=price-(0.05*price);
        }
        else if(moviename==movie[i]&&i%2==0)
        {
            discount=price-(0.1*price);
        }
    }
    cout<<"discount price is:"<<discount;
}
#include <iostream>
using namespace std;
main()
{
    int size, count = 0;
    
    string array1;
    cout<<"Enter array:";
    cin>>array1;
    string array2;
    cout<<"enter array 2:";
    cin>>array2;

    for (int i = 0; array1[i]!='\0'; i++)
    {
        for (int j = 0; array2[j]!='\0'; j++)
        {
            if (array1[i] == array2[j])
            {
                array2[j] = '*';
                count++;
                break;
            }
        }
       
    } cout << count;
}
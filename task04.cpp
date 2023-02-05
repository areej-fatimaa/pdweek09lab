#include <iostream>
using namespace std;
main()
{
    int size = 0;
    int array[size];
    cout << "enter size";
    cin >> size;
    int rem[size];
    int count = 0;
    for (int n = 0; n < size; n++)
    {
        cin >> array[n];

        while (array[n] != 0)
        {
            rem[n] = array[n] % 10;
            if (rem[n] == 7)
            {
                count++;
            }

            array[n] = array[n] / 10;
        }
    }
    if (count > 0)
    {
        cout << "boom!";
    }
    else
    {
        cout << "there is no seven in this array";
    }
}

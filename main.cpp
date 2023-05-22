#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int c[size]{0};
    int sum = 0;


    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number[" << i << "]: " << endl;
        cin >> c[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (c[i] % 2 == 1)
            sum += c[i];
    }
    cout << "Sum NOT PAR: " << sum << endl;
    return 0;
}
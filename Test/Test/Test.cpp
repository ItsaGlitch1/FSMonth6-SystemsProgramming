// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void staircase();
int main()
{
    staircase();
}
void staircase() {
    const int n = 120;
    int temp = n;
    char array[n];

    if (n > 0 && n <= 500)
    {
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (i >= temp - 1)
                {
                    array[i] = '#';
                }
                else {
                    array[i] = ' ';
                }
                cout << array[i];
            }
            cout << endl;
            temp--;
            
        }

    }
}
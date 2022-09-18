
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <iomanip>
#define PI 3.14159
using namespace std;

bool luShuMagicSquare(int square[3][3]);

int main()
{
    cout << "The desire gird dimension is 3x3" << endl;
    int i = 0;
    int j = 0;
    int intArray[3][3] = {};
    cout << "Please enter the desire input: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> intArray[i][j];
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << intArray[i][j] << "  ";
        }
        cout << "\n";
    }

    if (luShuMagicSquare(intArray) == true)
    {
        cout << "this is a lu shu magic square." << endl
             << "and, the magic number is 15";
    }
    else
    {
        cout << "this is not a lu shu magic square.\n";
    }

    
}

bool luShuMagicSquare(int square[3][3])
{
    int i = 0;
    int j = 0;
    if ((square[i][j] + square[i][j + 1] + square[i][j + 2] == square[i + 1][j] + square[i + 1][j + 1] + square[i + 1][j + 2]) &&
        (square[i + 1][j] + square[i + 1][j + 1] + square[i + 1][j + 2] == square[i + 2][j] + square[i + 2][j + 1] + square[i + 2][j + 2]) &&
        (square[i + 2][j] + square[i + 2][j + 1] + square[i + 2][j + 2] == square[i][j] + square[i + 1][j + 1] + square[i + 2][j + 2]) &&
        (square[i][j] + square[i + 1][j + 1] + square[i + 2][j + 2] == square[i + 2][j] + square[i + 1][j + 1] + square[i][j + 2]))
    {
        return true;
    }

    return false;
}
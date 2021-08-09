#include<iostream>
using namespace std;

void main()
{
    int y[10][10];
    int i, j;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            y[i][j] = i * j;
            cout << "\t" << y[i][j];
        }
        cout << endl;
    }
}
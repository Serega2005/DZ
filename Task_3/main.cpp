#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	for (int j = 1; j < 10; j++)
	{
		for (int i = 1; i < 11; i++)
		{
			int result = j * i;
			cout << j << " * " << i << " = " << result << endl;
		}
		cout << endl;
	}
}
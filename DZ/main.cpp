#include <iostream>
using namespace std;

int Fib(int i)
{
	int value = 0;
	if (i < 1) return 0;
	if (i == 1) return 1;
	return Fib(i - 1) + Fib(i - 2);
}

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите число до которого нужно выводить ряд Фибоначчи:"; cin >> n;
    int j = 0;
	int i = 0;
	while (Fib(i) <= n)
	{
		cout << Fib(i) << endl;
		i++;
	}
	return;
}
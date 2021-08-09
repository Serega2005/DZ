#include<iostream>
using namespace std;

bool prostoe(int n)
{
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int cislo;
    cout << "Введите число до которого будут выводиться простые числа:"; cin >> cislo;
    for (int n = 1; n <= cislo; n++)
    {
        if (prostoe(n))
            cout << n << " ";
    }
    return 1;
}
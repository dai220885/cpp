﻿/*По данному натуральному числу N найдите сумму чисел 1+1/1!+1/2!+1/3!+...+1/N!. Количество действий должно быть пропорционально N.

Входные данные
Задано единственное число N

Выходные данные
Необходимо вывести  результат вычисления в виде действительного числа c точностью до 5 знаков после запятой.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double S=1,F=1;
    cin >> n;
    for (int i=1; i <= n; ++i)
    {
        F=F*i;
        S=S+(1/F);
    }
    cout << round(S*100000)/100000;
    return 0;
}

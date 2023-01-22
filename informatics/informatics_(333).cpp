/*Входные данные
Вводятся целые числа a и b. Гарантируется, что a не превосходит b

Выходные данные
Выведите (через пробел) все четные числа от a до b (включительно).
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    for (int i=a; i <= b; ++i)
    {
        if (i%2==0)
        {
            cout << i << " ";
        }
    }
    return 0;
}

/*Вычислите сумму данных N натуральных чисел.

Входные данные
Вводится число N, а затем N чисел, сумму которых необходимо вычислить.

Выходные данные
Выведите единственное число - сумму введенных чисел.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,S=0;
    cin >> n;
    for (int i=1; i <= n; ++i)
    {
        int a;
        cin >> a;
        S+=a;
    }
    cout << S;
    return 0;
}

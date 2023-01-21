/*Проверьте, есть ли среди данных N чисел нули.

Входные данные
Вводится число N, а затем N чисел.

Выходные данные
Выведите YES, если среди введенных чисел есть хотя бы один нуль, или NO в противном случае.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,K=0;
    cin >> n;
    for (int i=1; i <= n; ++i)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            K+=1;
        }
    }
    if (K==0)
    {
        cout << "NO";
    }
    else cout << "YES";
    return 0;
}

/*
�������� ���������, ����������� 2 N.

������� ������
�������� ����� ��������������� ����� N, ������� �� ����������� 30.

�������� ������
�������� ����� 2 N.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,St=1;
    cin >> n;
    if (n < 0 || n > 30)
    {
        return 0;
    }
    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    else
    {
        for (int i=1; i <= n; ++i)
        {
             St=St*2;
        }
    }
    cout << St;
    return 0;
}

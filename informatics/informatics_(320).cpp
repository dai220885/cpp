/*
�� ������� ����� n ��������� ����� 1+1/2**2+1/3**2+...+1/n**2.

������� ������
�������� ���� ����� n, �� ������������� 100000.

�������� ������
���������� �������  �������� �����.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double S=0;
    cin >> n;
    if ( n < 1 || n > 100000)
    {
        return 0;
    }
    for (double i=1; i <= n; ++i)
    {
        S= S+(1.0/(i*i));
    }
    cout << S;
    return 0;
}

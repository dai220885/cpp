/*������� ������
�������� ����� N, � ����� N �����.

�������� ������
����������� � ��������, ������� ����� ������ N ����� �����.
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
            K++;
        }
    }
    cout << K;
    return 0;
}

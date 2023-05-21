#include <iostream>
using namespace std;

void ChuoiNhiPhan(int m, int n, string str)
{
	if (n == 0 && m == 0)
	{
		cout << str << endl;
		return;
	}
	if (m>0)
	{
        ChuoiNhiPhan(m - 1, n, str + '0');
	}
    if (n>0)  
    {
        ChuoiNhiPhan(m, n - 1, str + '1');
    }
	
}

int main()
{
	int m, n;
	cin >> m >> n;
	ChuoiNhiPhan(m, n,"");
}

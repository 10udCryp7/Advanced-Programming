#include <iostream>
using namespace std;

void ChuoiNhiPhan(int n, string str)
{
	int l = int(str.size());
	if (n == l)
	{
		cout << str << endl;
		return;
	}
	ChuoiNhiPhan(n, str + '0');
	ChuoiNhiPhan(n, str + '1');
}

int main()
{
	int n;
	cin >> n;
	ChuoiNhiPhan(n,"");
}

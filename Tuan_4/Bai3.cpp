#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, n, m;
    cin >> a >> n >> m;
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans*=a;
        ans%=m;
    }
    cout << ans;
}

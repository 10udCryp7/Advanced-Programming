#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    float arrX[3001];
    float arrY[3001];
    for (int i = 0; i < n; i++) {
        cin >> arrX[i];
        cin >> arrY[i];
    }
    bool check = false;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arrX[i] == arrX[j] || arrY[i] == arrY[j] || abs(arrX[i]-arrX[j]) == abs(arrY[i]-arrY[j])) {
                check = true;
                break;
            }
            if (check == true) break;
        }
    }
    if (check == true) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}

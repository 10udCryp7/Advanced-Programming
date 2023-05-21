#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int left = 0;
    int right = n - 1;
    int mid;
    while (right - left > 1) {
        mid = (right + left)/2;
        if (arr[mid] >= x) {
            right = mid;
        }
        else {
            left = mid;
        }
    }
    if (arr[right] == x || arr[left] == x) {
        cout << "YES"; 
    }
    else {
        cout << "NO";
    }
}

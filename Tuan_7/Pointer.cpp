#include <iostream>

using namespace std;

int strlen(char a[]) {
    int i = 0;
    while (*(a+i) != '\0') {
        i++;
    }
    return i;
}

void reverse(char a[]) {
    int n = strlen(a);
    for (int i = 0; i < n / 2; i++) {
        char temp = *(a+i);
        *(a+i) = *(a + n - i - 1);
        *(a + n - i - 1) = temp;
    }
}

void delete_char(char a[], char c) {
    int i = 0, j = 0;
    while (a[i] != '\0') {
        if (a[i] != c) {
            a[j++] = a[i];
        }
        i++;
    }
    a[j] = '\0';
}

void pad_right(char a[], int n) {
    int len = strlen(a);
    if (len < n) {
        for (int i = len; i < n; i++) {
            a[i] = ' ';
        }
        a[n] = '\0';
    }
}

void pad_left(char a[], int n) {
    int len = strlen(a);
    if (len < n) {
        for (int i = len; i >= 0; i--) {
            a[i + n - len] = a[i];
        }
        for (int i = 0; i < n - len; i++) {
            a[i] = ' ';
        }
    }
}

void truncate(char a[], int n) {
    int i = 0;
    while (strlen(a) > n) {
        a[i] = '\0';
        i--;
    }
}

bool is_palindrome(char a[]) {
    int n = strlen(a);
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

void trim_left(char a[]) {
    int i = 0, j = 0;
    while (a[i] == ' ') {
        i++;
    }
    while (a[i] != '\0') {
        a[j++] = a[i++];
    }
    a[j] = '\0';
}

void trim_right(char a[]) {
    int n = strlen(a);
    while (n > 0 && a[n - 1] == ' ') {
        a[--n] = '\0';
    }
}

int main() {
    char a[100];
    char t[100];
    int n;

    cin.getline(a, 100);
    cin >> n;
     for (int i = 0; i < 100; i++) t[i] = a[i];
    reverse(a);
    cout << "ehgngnoccohiai" << endl;
     for (int i = 0; i < 100; i++) a[i] = t[i];
    delete_char(a, 'c'); delete_char(a, ' ');
    cout << a << endl;
     for (int i = 0; i < 100; i++) a[i] = t[i];
    pad_right(a, n);
    cout << a << endl;
    for (int i = 0; i < 100; i++) a[i] = t[i];
    pad_left(a, n);
    cout << a << endl;
    for (int i = 0; i < 100; i++) a[i] = t[i];
    truncate(a, n);
    cout << a << endl;
    for (int i = 0; i < 100; i++) a[i] = t[i];
    cout << boolalpha << is_palindrome(a) << endl;
    for (int i = 0; i < 100; i++) a[i] = t[i];
    trim_left(a);
    cout << a << endl;
    for (int i = 0; i < 100; i++) a[i] = t[i];  
    trim_right(a);
    cout << a << endl;

    return 0;
}


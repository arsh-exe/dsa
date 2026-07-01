#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 20;

    if (num < 2) {
        cout << "Not Prime";
        return 0;
    }

    int prime = 1;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }

    if (prime)
        cout << "Prime";
    else
        cout << "Not Prime";
}
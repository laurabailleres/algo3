#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int potencia(int base, int exp) {
    if (exp == 0) return 1;
    if (exp == 1) return base;

    int mitad = exp / 2;
    int res_ = potencia(base, mitad);
    return res_ * res_;
}

int main() {
    int b, e;
    cin >> b >> e;

    cout << potencia(b, e);
    return 0;
}
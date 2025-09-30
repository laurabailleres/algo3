#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<int> array_input;

void montaña(int izq, int der) {
    int medio = (izq+der) / 2;

    if (array_input[medio-1] < array_input[medio] && array_input[medio] > array_input[medio+1]) {
        cout << medio << ' ' << array_input[medio];
    } else if (array_input[medio-1] < array_input[medio]) {
        montaña(medio, der);
    } else {
        montaña(izq, medio);
    }
}

int main() {
    int n, a, i=0;

    cin >> n;
    array_input = vector<int>(n);

    while (i < n) {
        cin >> a;
        array_input[i] = a;
        i++;
    }
    montaña(0, n-1);

    return 0;
}
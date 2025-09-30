#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<int> array_input;

void indice(int izq, int der) {
    int medio = (izq+der) / 2;

    if (medio == array_input[medio]) {
        cout << medio;
        return;
    } else if (medio < array_input[medio]) {
        indice(izq, medio-1);
    } else {
        indice(medio+1, der);
    }
}

int main() {
    int n, a, i=0;

    cin >> n;
    array_input = vector<int>(n+1);

    while (i < n) {
        cin >> a;
        array_input[i+1] = a;
        i++;
    }
    indice(1, n);

    return 0;
}
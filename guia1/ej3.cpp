#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

vector<int> array_input;

void izq(int i, int d) {
    if (i == d) { // caso base
        cout << "es";
        return;
    }
    int medio = (i+d) / 2; // divide

    int suma_izq = 0;
    int suma_der = 0;
    
    for (int j = i; j <= medio; j++) {
        suma_izq += array_input[j];
    }
    for (int j = medio+1; j <= d; j++) {
        suma_der += array_input[j];
    }

    if (suma_izq > suma_der) {
        izq(i, medio);
    } else {
        cout << "no es";
    }
}

int main() {
    int n, a, i=0;
    cin >> n; // cantidad de elementos del array

    array_input = vector<int>(n);

    while (i < n) {
        cin >> a;
        array_input[i] = a;
        i++;
    }

    izq(0, n-1);

    return 0;
}

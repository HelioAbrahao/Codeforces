#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maior = a[0], menor = a[0];
    int posMaior = 0, posMenor = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > maior) {
            maior = a[i];
            posMaior = i;
        }
        if (a[i] <= menor) {
            menor = a[i];
            posMenor = i;
        }
    }

    int trocas = posMaior + (n - 1 - posMenor);

    if (posMaior > posMenor) {
        trocas--;
    }

    cout << trocas << endl;

    return 0;
}

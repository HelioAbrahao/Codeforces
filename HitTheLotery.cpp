#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int notas[] = {100, 20, 10, 5, 1};
    int total = 0;

    for (int i = 0; i < 5; i++) {
        total += n / notas[i];
        n %= notas[i];
    }

    cout << total << endl;

    return 0;
}

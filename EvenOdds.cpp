#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    long long n, k;
    cin >> n >> k; 

    long long quantidadeImpares = (n + 1) / 2;

    if(k <= quantidadeImpares){
        cout << (2 * k) - 1 << endl; 
    } else {
        cout << 2 * (k - quantidadeImpares) << endl; 
    }

    return 0;
}

/*
odd -> ímpar
even -> par
*/


// {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}
//  1  2  3  4  5 |6  7  8  9  10
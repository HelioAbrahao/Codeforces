#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d; 

    vector<bool> dragons(d, false); 

    for(int i = k - 1; i <= d; i += k){
        dragons[i] = true; 
    }

    for(int i = l - 1; i <= d; i += l){
        dragons[i] = true; 
    }

    for(int i = m - 1; i <= d; i += m){
        dragons[i] = true;
    }

    for(int i = n - 1; i <= d; i += n){
        dragons[i] = true; 
    }


    int cont = 0;
    for(int i = 0; i < d; i++){
        if(dragons[i]){
            cont++; 
        }
    }

    cout << cont << endl; 

    return 0;
}

/*
However, just counting dragons was boring as well, so she entertained herself at best she could. Tonight she imagined that all dragons were here to steal her, and she was fighting them off. Every k-th dragon got punched in the face with a frying pan. Every l-th dragon got his tail shut into the balcony door. Every m-th dragon got his paws trampled with sharp heels. Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.

How many imaginary dragons suffered moral or physical damage tonight, if the princess counted a total of d dragons?

Input

Input data contains integer numbers k, l, m, n and d, each number in a separate line (1 ≤ k, l, m, n ≤ 10, 1 ≤ d ≤ 105).

Output

Output the number of damaged dragons.
*/
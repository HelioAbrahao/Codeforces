#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr); 

    // Dado um vetor v de tamanho n, conte quantos prefixos têm soma par. 

    int contador = 0;
    int n;
    
    cin >> n;

    vector<int> v(n);
    vector<int> ps(n); 

    for(int i = 0; i < n; i++){
        cout << "Entre com o valor cujo indice é " << i << ": ";
        cin >> v[i]; 
    }

    ps[0] = v[0]; 
    for(int i = 1; i < n; i++){
        ps[i] = ps[i - 1] + v[i];
    }

    for(int i = 0; i < n; i++){
        if(ps[i] % 2 == 0){
            contador++;
        }
    }

    cout << contador << endl; 

    return 0;
}


/*
Entre 0 e 1 -> ps[1]
Entre 0 e 2 -> ps[2]
Entre 0 e n -> ps[n]
*/
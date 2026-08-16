#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // you also have an empty cup that can hold up to c grams of water 

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;

        double maior, menor;
        if(a > b){
            maior = a;
            menor = b;
        } else {
            menor = a;
            maior = b; 
        }

        double valor_mudanca = (maior - menor)/2; 
        double resultado = valor_mudanca/c; 
        
        cout << ceil(resultado) << endl; 
    }

    return 0; 
}
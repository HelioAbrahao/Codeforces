#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // Quando a cor do uniforme titular do time mandante coincide com a cor do uniforme visitante do time visitante o mandante também veste seu próprio uniforme visitante

    int numero_times;
    cin >> numero_times;

    vector<int>casa(numero_times);
    vector<int>visitante(numero_times); 

    for(int i = 0; i < numero_times; i++){
        cin >> casa[i] >> visitante[i]; 
    }

    int contador = 0; 
    for(int i = 0; i < numero_times; i++){
        for(int j = 0; j < numero_times; j++){
            if(i != j && casa[i] == visitante[j]){
                contador++;
            }
        }
    }
    
    cout << contador << endl; 

    return 0; 
}
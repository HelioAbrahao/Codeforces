#include<iostream>
#include<vector>
using namespace std;

bool is_possible(vector<int> arr){
    bool has_odd = false;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 != 0){
            has_odd = true;
            break;
        }
    }

    if(has_odd == false){
        return false;
    } else {
        return true; 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr); 

    int t;
    cin >> t; // Número de casos 

    // Para cada caso, um inteiro n, uma linha com n inteiros: a1, a2, ..., an 

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> vetor_dinamico1(n);
        for(int j = 0; j < n; j++){
            cin >> vetor_dinamico1[j];
        }

        if(is_possible(vetor_dinamico1) == false){
            cout << "NAO" << endl; 
        } else{
            cout << "SIM" << endl; 
        }
    }

    return 0;
}
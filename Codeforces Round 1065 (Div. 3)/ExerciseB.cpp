#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector<int> vetor(n);

        for(int j = 0; j < n; j++){
            cin >> vetor[j];
        }

        if((vetor[0] == -1) && vetor[n - 1] == -1){
            vetor[0] = 0;
            vetor[n - 1] = 0; 
        } else if(vetor[0] == -1 && vetor[n - 1] != -1){
            vetor[0] = vetor[n - 1]; 
        } else if(vetor[0] != -1 && vetor[n - 1] == 1){
            vetor[n - 1] = vetor[0]; 
        }

        for(int i = 1; i < n - 2; i++){
            if(vetor[i] == -1){
                vetor[i] = 0; 
            }
        }

        // cout << "soma: " << soma << endl; 

        // for(int j = 0; j < n - 1; j++){
        //     cout << vetor2[j] << " "; 
        // }

        // cout << endl;         
    }

    return 0;
}

// O valor absoluto da soma dos elementos no array da diferença seja minimizado. 
// bi = ai+1 - ai 
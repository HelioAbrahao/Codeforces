#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number_of_cases;
    cin >> number_of_cases; 

    for(int i = 0; i < number_of_cases; i++){
        int size;
        cin >> size;

        vector<int> vetor(size);
        for(int i = 0; i < size; i++){
            cin >> vetor[i];
        }

        int menor_elemento = *min_element(vetor.begin(), vetor.end());
        int maior_elemento = *max_element(vetor.begin(), vetor.end()); 

        cout << maior_elemento - menor_elemento << endl;
    }

    return 0; 
}
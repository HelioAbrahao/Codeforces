#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;

        vector<int> vetor; 

        int contador = 1; 
        while(number > 0){
            int value = number % 10;

            if(value != 0){
                vetor.push_back(value * contador); 
            }; 

            number = number / 10; 
            contador = contador * 10;
        }
    
        cout << vetor.size() << endl;
        for(int i = 0; i < vetor.size(); i++){
            cout << vetor[i] << " "; 
        }
        cout << endl; 
    }

    return 0; 
}
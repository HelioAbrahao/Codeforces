#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number_of_events;
    cin >> number_of_events;
 
    int hired_officers = 0;
    int untreated_crimes = 0; 

    vector<int> vetor(number_of_events); 

    for(int i = 0; i < number_of_events; i++){
        cin >> vetor[i]; 
    }

    for(int i = 0; i < number_of_events; i++){
        if(vetor[i] > 0) {
            hired_officers = hired_officers + vetor[i];
        } else {
            if(hired_officers == 0){
                untreated_crimes++; 
            } else {
                hired_officers--;
            }
        } 
    }

    cout << untreated_crimes << endl; 

    return 0; 
}
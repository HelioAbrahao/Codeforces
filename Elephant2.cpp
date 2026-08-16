#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. 

    int number;
    cin >> number; 

    int contador = 0;

    while(number > 0){
        if(number >= 5){
            contador++; 
            number = number - 5;
        } else if (number >= 4){
            contador++; 
            number = number - 4;
        } else if (number >= 3){
            contador++; 
            number = number - 3;
        } else if (number >= 2){
            contador++;
            number = number - 2;  
        } else if (number >= 1){
            contador++;
            number = number - 1; 
        }
    }

    cout << contador << endl; 

    return 0; 
}
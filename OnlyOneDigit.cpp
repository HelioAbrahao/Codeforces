#include<iostream>
#include<vector>
using namespace std;

int return_minimum(int number){
    vector<int>numbers;
    int val;
    if(number < 10){
        return number; 
    } else if (number >= 10 && number < 100){
        val = 2;
    } else if (number >= 100 && number < 1000){
        val = 3;
    } else if (number == 1000){
        val = 4;
    }
    
    for(int i = 0; i < val; i++){
        int aux; 
        aux = number % 10;
        number = number / 10; 
        numbers.push_back(aux); 
    }

    int minimum = numbers[0]; 
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] < minimum){
            minimum = numbers[i];
        }
    }

    return minimum; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int number;
    cin >> number;
    for(int i = 0; i < number; i++){
        int value; 
        cin >> value;
        cout << return_minimum(value) << endl; 
    }

    return 0; 
}
#include<iostream>
#include<string>
using namespace std;

bool is_distinct(int number){
    bool digit_used[10] = {false}; 

    while(number > 0){
        int digit = number % 10; 

        if(digit_used[digit] == true){
            return false; 
        }

        digit_used[digit] = true;
        number = number/10; 
    }

    return true; 
}

// bool is_distinct(int number){
//     string str = to_string(number);
//     for(int i = 0; i < str.size() - 1; i++){
//         for(int j = 1 + i; j < str.size(); j++){
//             if(str[i] == str[j]){
//                 return false; 
//             }
//         }
//     } 
//     return true; 
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int year; 
    cin >> year; 

    for(int i = year + 1; i <= 9013; i++){
        if(is_distinct(i) == true){
            cout << i << endl;
            break;
        }
    }

    return 0;
}

// Dado um input de um ano, eu preciso ter um output de um número maior do que o input e que tenha apenas distinct digits. 
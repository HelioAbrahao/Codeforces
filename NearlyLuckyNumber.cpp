#include<iostream>
using namespace std;

bool is_lucky_number(long long number){
    string str = to_string(number); 
    for(int i = 0; i < str.size(); i++){
        if(str[i] != '4' && str[i] != '7'){
            return false;
        }
    }
    return true; 
}

bool is_nearly_lucky_number(long long number){
    long long number_of_lucky_digits = 0;
    string str = to_string(number);
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '4' || str[i] == '7'){
            number_of_lucky_digits++;
        }
    }

    if(is_lucky_number(number_of_lucky_digits)){
        return true;
    } else {
        return false; 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr); 

    long long n;
    cin >> n;

    if(is_nearly_lucky_number(n) == true){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
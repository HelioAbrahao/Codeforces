#include<iostream>
using namespace std;

bool is_lucky_number(int number){
    string str = to_string(number); 
    for(int i = 0; i < str.size(); i++){
        if(str[i] != '4' && str[i] != '7'){
            return false; 
        }
    }
    return true; 
}

bool is_almost_lucky(int number){
    for(int i = 0; i <= number; i++){
        if(is_lucky_number(i)){
            if(number % i == 0){
                return true;
            }
        }
    }
    return false; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // a number almost lucky if it could be evenly divided by some lucky number. 

    int n;
    cin >> n;

    if(is_almost_lucky(n)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
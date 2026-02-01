#include<iostream>
using namespace std;

bool will_produce_output(string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9'){
            return true;
        }
    }
    return false; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str; 

    if(will_produce_output(str) == true){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
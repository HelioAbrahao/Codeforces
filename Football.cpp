#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str; 

    int sum = 0;
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i + 1] == str[i]){
            sum = sum + 1;
            if(sum == 6){
                break;
            }
        } else{
            sum = 0; 
        }
    }

    if(sum == 6){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0; 
}

/*
- A zero corresponds to players of one team, a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous.


*/

// 00100110 1 1 1  1  1  1  1  0  1
// 01234567 8 9 10 11 12 13 14 15 16
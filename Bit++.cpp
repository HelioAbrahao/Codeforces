#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int value;
    cin >> value;

    int sum = 0; 

    for(int i = 0; i < value; i++){
        string str; 
        cin >> str;
        if(str[1] == '+'){
            sum++;
            continue;
        } else if(str[1] == '-'){
            sum--;
            continue;
        }
    }

    cout << sum << endl; 

    return 0;
}
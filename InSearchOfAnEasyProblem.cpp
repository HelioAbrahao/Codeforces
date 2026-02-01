#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int number;
    cin >> number;

    int value;
    for(int i = 0; i < number; i++){
        cin >> value; 
        if(value == 1){
            cout << "HARD" << endl;
            return 0; 
        }
    }

    cout << "EASY" << endl; 

    return 0;
}
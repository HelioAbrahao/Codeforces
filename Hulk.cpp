#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;

    for(int i = 1; i <= number; i++){
        if(i % 2 == 0 && i != number){
            cout << "I love that ";
        } else if(i % 2 != 0 && i != number){
            cout << "I hate that ";
        } else if(i == number && i % 2 == 0){
            cout << "I love it";
        } else if(i == number && i % 2 != 0){
            cout << "I hate it";
        }
    }

    return 0;
}
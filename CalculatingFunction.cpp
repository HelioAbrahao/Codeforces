#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long number;
    cin >> number;

    if(number % 2 == 0){
        cout << number/2 << endl; 
    } else {
        cout << (number/2) - number << endl; 
    }
    
    return 0;
}
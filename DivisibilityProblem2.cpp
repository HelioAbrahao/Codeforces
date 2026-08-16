#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // In one move, you can increase a by 1. Your task is to find the minimum number of moves you need to do in order to make a divisible by b. 

    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        int a, b;
        cin >> a >> b;
        
        if(a % b == 0){
            cout << 0 << endl; 
        } else {
            cout << b - (a % b) << endl; 
        }
    }
    return 0; 
}
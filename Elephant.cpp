#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number, sum = 0;
    cin >> number; 

    while(number > 0){
        if(number >= 5){
            number = number - 5; 
        } else if (number >= 4){
            number = number - 4;
        } else if (number >= 3){
            number = number - 3;
        } else if (number >= 2){
            number = number - 2; 
        } else if (number >= 1){
            number = number - 1;
        }

        sum++; 
    }

    cout << sum << endl; 

    return 0;
}
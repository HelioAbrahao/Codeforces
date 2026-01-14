#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int num1, num2;
    cin >> num1 >> num2; 

    for(int i = 0; i < num2; i++){
        if(num1 % 10 == 0){
            num1 = num1/10; 
        } else {
            num1 = num1 - 1;
        }
    }

    cout << num1 << endl;

    return 0;
}
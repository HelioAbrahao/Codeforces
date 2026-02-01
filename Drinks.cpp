#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // There are n drinks in his fridge,

    long double number;
    cin >> number;

    long double sum = 0.0;
    for(long double i = 0; i < number; i++){
        long double value;
        cin >> value;
        sum += value; 
    }

    cout << fixed << setprecision(12) << (sum/number) << endl; 

    return 0;
}
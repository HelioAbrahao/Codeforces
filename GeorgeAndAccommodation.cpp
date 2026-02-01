#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;

    int aux = 0; 
    for(int i = 0; i < number; i++){
        int value1, value2; 
        cin >> value1 >> value2; 

        if(value2 - value1 >= 2){
            aux++; 
        }
    }

    cout << aux << endl; 

    return 0;
}
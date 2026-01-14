#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // n stones on the table in a row, each of them can be red, green or blue.

    int value, sum = 0;
    cin >> value;

    char ch; 
    char temp; 
    for(int i = 0; i < value; i++){
        cin >> ch;
        if(ch == temp){
            sum++; 
        } 
        temp = ch; 
    }

    cout << sum << endl; 

    return 0;
}
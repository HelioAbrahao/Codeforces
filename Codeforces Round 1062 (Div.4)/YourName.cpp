#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;

    string str1, str2;
    for(int i = 0; i < number; i++){
        int value;
        cin >> value;  
        cin >> str1 >> str2;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
    
        // cout << "--------------------------------------------" << endl; 

        // cout << str1 << endl;
        // cout << str2 << endl; 

        // cout << "---------------------------------------------" << endl; 

        if(str1 == str2) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}

/*
khba girlfriend's name has n cubes. They are arranged in a row, forming a string s. -> string t, consisting of n lowercase latin letters. 
*/
#include<string>
#include<iostream>
#include<cctype>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    string str1, str2; 
    cin >> str1 >> str2;

    for(char &c : str1){
        c = tolower(c); 
    }

    for(char &c : str2){
        c = tolower(c); 
    }

    if(str1 > str2){
        cout << 1 << endl;
    } else if(str1 < str2){
        cout << -1 << endl; 
    } else {
        cout << 0 << endl; 
    }

    return 0;
}
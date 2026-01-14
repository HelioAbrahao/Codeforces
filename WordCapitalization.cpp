#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    string str;
    cin >> str;

    str[0] = toupper(str[0]); 

    cout << str << endl; 

    return 0;
}
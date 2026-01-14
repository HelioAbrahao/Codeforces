#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // If the number of distinct characters in one's user name is odd (ímpar), then he is a male, otherwise she is a female. 
    
    string str;
    cin >> str;

    set<char> chars;

    for(int i = 0; i < str.length(); i++){
        chars.insert(str[i]); 
    }

    if(chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl; 
    }

    return 0;
}
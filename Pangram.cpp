#include<iostream>
#include<vector>
#include<set>
#include<cctype>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;

    string str;
    cin >> str; 

    for(int i = 0; i < str.size(); i++){
        str[i] = tolower(str[i]);  
    }

    // for(int i = 0; i < str.size(); i++){
    //     cout << str[i] << " "; 
    // }

    // cout << endl; 

    set<char> alphabet; 
    for(int i = 0; i < str.size(); i++){
        alphabet.insert(str[i]); 
    }

    if(alphabet.size() == 26){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl; 
    } 

    return 0;
}
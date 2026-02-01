#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    string str;
    getline(cin, str); 

    set<char> caracteres; 
    for(int i = 0; i < str.size(); i++){
        if(isalpha(str[i])){
            caracteres.insert(str[i]); 
        }
    }

    cout << caracteres.size() << endl;

    return 0; 
}
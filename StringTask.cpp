#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    string str, str2, str3;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        str[i] = tolower(str[i]); 
    }
    
    // cout << str << endl;
    // cout << "---------------------------------------" << endl; 

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
            continue;
        } else{
            str2.push_back(str[i]);
        }
    }

    // cout << str2 << endl; 

    // cout << "----------------------------------------" << endl; 

    int aux = 0;
    for(int i = 0; i < str2.size();){
        if(aux % 2 == 0){
            str3.push_back('.');
        } else {
            str3.push_back(str2[i]);
            i++;
        }
        aux++;
    }

    cout << str3 << endl;

    return 0;
}
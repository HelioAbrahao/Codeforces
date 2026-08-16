#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string solveFunction(string str){
    string str2 = str;
    string str3 = str;

    for(char &c : str2){
        c = toupper(c);
    }

    for(char&c : str3){
        c = toupper(c);
    }

    str3[0] = tolower(str3[0]); 

    if(str != str2 && str != str3) {
        return str; 
    }

    if(str == str2){
        for(char& c : str){
            c = tolower(c); 
        }
        return str;  
    }

    if(str == str3){
        for(char& c : str){
            c = tolower(c);
        } 
        str[0] = toupper(str[0]); 
        return str;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str, str2, str3;
    cin >> str; 

    cout << solveFunction(str) << endl;  

    return 0; 
}
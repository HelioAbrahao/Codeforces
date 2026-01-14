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

    int number_of_upper = 0;
    int number_of_lower = 0; 

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'E' || str[i] == 'F' || str[i] == 'G' || str[i] == 'H' || str[i] == 'I' || str[i] == 'J' || str[i] == 'K' || str[i] == 'L' || str[i] == 'M' || str[i] == 'N' || str[i] == 'O' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S' || str[i] == 'T' || str[i] == 'U' || str[i] == 'V' || str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z'){
            number_of_upper++;
        } else{
            number_of_lower++;
        }
    }

    if(number_of_upper > number_of_lower){
        for(int i = 0; i < str.size(); i++){
            str[i] = toupper(str[i]); 
        }
    } else {
        for(int i = 0; i < str.size(); i++){
            str[i] = tolower(str[i]); 
        }
    }

    cout << str << endl; 

    return 0;
}
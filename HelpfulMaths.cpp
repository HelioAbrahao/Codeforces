#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 
 
    string str;
    cin >> str; 
    
    vector<int> valores;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1' || str[i] == '2' || str[i] == '3'){
            valores.push_back(str[i] - '0'); 
        }
    }

    sort(valores.begin(), valores.end()); 
    // for(int i = 0; i < valores.size(); i++){
    //     cout << valores[i] << " "; 
    // }

    string str2;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '1' || str[i] == '2' || str[i] == '3'){
            str2.push_back('0');
        } else {
            str2.push_back('+'); 
        }
    }  

    // cout << str2 << endl; 

    // cout << "--------------------------------" << endl; 

    int auxiliar = 0;
    for(int i = 0; i < valores.size(); i++){
        str2[auxiliar] = valores[i] + '0'; 
        auxiliar = auxiliar + 2;
    }

    cout << str2 << endl; 

    return 0;
}
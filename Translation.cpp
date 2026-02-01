#include<iostream>
using namespace std;

string reverse_string(string str){
    int num = str.size() - 1;  
    string reversed_string = str; 
    for(int i = 0; i < reversed_string.size()/2; i++){
        swap(reversed_string[i], reversed_string[num]);
        num--; 
    }

    return reversed_string; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    string str1, str2;
    cin >> str1 >> str2;

    if(reverse_string(str1) == str2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}


// berland -> birland
//    code -> edoc
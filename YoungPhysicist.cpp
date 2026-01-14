#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int value;
    cin >> value;

    vector<vector<int>> matrix(value, vector<int>(3));

    for(int i = 0; i < value; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrix[i][j]; 
        }
    }

    bool verify = true; 
    for(int j = 0; j < 3; j++){
        long long sum = 0;
        for(int i = 0; i < value; i++){
            sum += matrix[i][j]; 
        }
        if(sum != 0){
            verify = false; 
            break; 
        }
    }

    if(verify == true){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl; 
    }

    return 0;
}
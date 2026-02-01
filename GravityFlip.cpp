#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int number_of_columns;
    cin >> number_of_columns; 

    vector<int> v(number_of_columns);
    for(int i = 0; i < number_of_columns; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < number_of_columns; i++){
        if(i == number_of_columns - 1){
            cout << v[i];
        } else{
            cout << v[i] << " "; 
        }
    }

    cout << endl; 

    return 0; 
}
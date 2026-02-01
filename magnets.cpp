#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int number;
    cin >> number;

    vector<int> values;
    for(int i = 0; i < number; i++){
        int v = 0;
        cin >> v;
        v = v - 1;
        values.push_back(v); 
    }

    // for(int i = 0; i < number; i++){
    //     cout << values[i] << " ";
    // }

    // cout << endl;

    int answer = 1;
    for(int i = 0; i < number - 1; i++){
        if(values[i] != values[i+1]){
            answer++; 
        }
    }

    cout << answer << endl; 

    return 0;
}
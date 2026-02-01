#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;

    vector<int>values; 
    for(int i = 0; i < number; i++){
        cin >> values[i]; 
    }

    sort(values.begin(), values.end());
    for(int i = 0; i < number/2 + 1; i++){
        values.pop_back();  
    }

    cout << values.size()

    return 0;
}

/*
n coins of arbitrary values a1, a2, ..., an. 

*/
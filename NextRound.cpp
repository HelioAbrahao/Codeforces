#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int participants, k, sum = 0;
    cin >> participants >> k; 
     
    vector<int> scores(participants);
    for(int i = 0; i < participants; i++){
        cin >> scores[i];
    }

    int minimum_value = scores[k - 1]; 
    // cout << minimum_value << endl; 

    for(int i = 0; i < participants; i++){
        if(scores[i] <= 0){
            continue; 
        } else if (scores[i] >= minimum_value){
            sum++;
        }
    }
    
    cout << sum << endl; 

    return 0;
}
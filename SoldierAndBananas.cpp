#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // k , n, w 
    // The cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

    int cost_first_banana, initial_number_dollars, number_bananas;
    cin >> cost_first_banana >> initial_number_dollars >> number_bananas;


    int total_cost = 0; 
    for(int i = 1; i <= number_bananas; i++){
        total_cost += cost_first_banana * i; 
    }

    // cout << total_cost << endl; 

    // cout << "-------------------------------------------------" << endl; 

    int borrowed_dollars = total_cost - initial_number_dollars; 
    if(borrowed_dollars < 0){
        borrowed_dollars = 0; 
    }
    cout << borrowed_dollars << endl; 

    return 0;
}
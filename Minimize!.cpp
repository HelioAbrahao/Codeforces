#include<iostream>
#include<climits>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);  

    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        // long long minimum_value = LLONG_MAX;  
        int a, b; 
        cin >> a >> b; 

        // for(int c = a; c <= b; c++){
        //     if(((c-a)+(b - c)) < minimum_value){
        //         minimum_value = ((c - a)+(b - c)); 
        //     }
        // }

        // cout << minimum_value << endl; 

        cout << b - a << endl;       
    }
    
    return 0;
}
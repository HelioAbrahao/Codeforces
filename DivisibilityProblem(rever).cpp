#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    long long a, b, c;
    cin >> c; 
    
    for(int i = 0; i < c; i++){
     
        cin >> a >> b; 
     
        if(a % b == 0){
            cout << 0 << endl; 
        } else {
            cout << b - (a % b) << endl;
        } 
    }

    return 0; 
}
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;
    
    for(int i = 0; i < number; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(a == b && a == c && a == d){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
#include<iostream>
#include<set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    set<int> values;  
    for(int i = 0; i < 4; i++){
        int value;
        cin >> value; 
        values.insert(value); 
    }

    cout << 4 - values.size() << endl; 

    return 0;
}
#define ll long long

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool apenas_pares(vector<ll> v){
    bool confirmacao = true;
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 != 0){
            confirmacao = false; 
        }
    }

    return confirmacao; 
}

bool apenas_impares(vector<ll> v){
    bool confirmacao = true; 
    for(int i = 0; i < v.size(); i++){
        if(v[i] % 2 == 0){
            confirmacao = false;
        }
    }
    return confirmacao; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    ll number;
    cin >> number;

    vector<ll> v;
    for(ll i = 0; i < number; i++){
        ll value; 
        cin >> value; 

        for(ll j = 0; j < value; j++){
            int x;
            cin >> x;
            v.push_back(x); 
        }
        
        if(apenas_impares(v) == false && apenas_pares(v) == false){
            sort(v.begin(), v.end()); 
        }
    
        for(int z = 0; z < v.size(); z++){
            if(z == v.size() - 1){
                cout << v[z];
            } else {
                cout << v[z] << " "; 
            }  
        }
        cout << endl; 

        v.clear(); 
    }    

    return 0;
}


/*
n toys arranged in a row. 

The wand can only swap two toys if their integers have differenty parity(one is even, the other is odd). Basicaly, you can only swap toys if ai mod2 != aj mod2
*/


// 2 5 3 1 7
// 1 2 3 5 7
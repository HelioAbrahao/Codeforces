#define ll long long

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

ll gcd(ll a, ll b){
    while(b != 0){
        ll r = a % b;
        a = b;
        b = r; 
    }
    return a; 
}

ll is_possible(vector<ll> a){
    for(ll x = 2; x < 1000000000000000000; x++){
        for(ll var = 0; var < a.size(); var++){
            if(gcd(a[var], x) == 1){
                return x; 
            }
        }
    }
    return -1; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    ll number;
    cin >> number;

    vector<ll> n; 
    for(ll i = 0; i < number; i++){
        ll value;
        cin >> value; 
        
        for(ll j = 0; j < value; j++){
            ll a;
            cin >> a;
            n.push_back(a); 
        }


        // cout << endl; 
        // cout << "----------------------------------------------------" << endl; 

        // for(int x = 0; x < n.size(); x++){
        //     cout << n[x] << " ";
        // }
        
        // cout << endl; 
        // cout << "----------------------------------------------------" << endl;  

        cout << is_possible(n) << endl;
        n.clear(); 
    }

    return 0;
}
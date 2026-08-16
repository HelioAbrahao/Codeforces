#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; 
    cin >> n;

    for(int i = 0; i < n; i++){
        int alice, bob, charlie; 
        cin >> alice >> bob >> charlie; 

        int maior = max({alice, bob, charlie}); 
        int menor = min({alice, bob, charlie}); 
        int meio = alice + bob + charlie - maior - menor; 

        cout << min({maior - meio, meio - menor}) << endl; 
    }
    return 0; 
}
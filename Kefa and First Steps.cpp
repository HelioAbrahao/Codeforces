#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int n;
    vector<int> v; 
    
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a; 
        v.push_back(a);
    }

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " "; 
    // }

    int contador = 0;
    int max = 0;  
    for(int i = 0; i < n - 1; i++){
        if(v[i] > v[i + 1]){
            contador = 0; 
        } else {
            contador++;
        }

        if(contador > max){
            max = contador; 
        }
    }

    cout << max + 1 << endl; 

    return 0; 
}


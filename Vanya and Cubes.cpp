#include<iostream>
using namespace std;

int piramide(long long cubos, long long nivel){
    if(cubos < (nivel + (nivel * nivel))/2) {
        return nivel - 1; 
    } else {
        return piramide(cubos - (nivel + (nivel * nivel))/2, nivel + 1); 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long number_of_cubes;
    cin >> number_of_cubes;

    cout << piramide(number_of_cubes, 1); 

    return 0; 
}

// O(n) -> 100000000000000 (anos rodando)
// 
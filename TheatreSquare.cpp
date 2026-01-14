#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    long long n, m, a;
    cin >> n >> m >> a; 

    // long long contador1 = 0;
    // long long contador2 = 0; 
    // while(m > 0){
    //     m = m - a; 
    //     contador1++;
    // }

    // while(n > 0){
    //     n = n - a;
    //     contador2++;
    // }

    long long quantidade_de_blocos_x = ceil((double)n / a); 
    long long quantidade_de_blocos_y = ceil((double)m / a); 

    // cout << quantidade_de_blocos_x << endl;
    // cout << quantidade_de_blocos_y << endl; 

    cout << quantidade_de_blocos_x * quantidade_de_blocos_y << endl; 

    /*
    - Theatre Square has a rectangular shape with the size n x m meters.
    - Each flagstones is of the size a x a. 
    - What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Squase, but the Squase has to be covered. It's not allowed to break the flagstones.
    */

    return 0;
}

// 6 x 6 = 36
// 4 x 4 = 16
// 36/16 = 
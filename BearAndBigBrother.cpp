#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b; 

    int sum = 0; 
    while(a <= b){
        a = a * 3; 
        b = b * 2;
        sum++;  
    }

    cout << sum << endl; 

    return 0;
}

/*
Right now, Limak and Bob weight a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight. Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year. 
* After how many years will Limak become strictly larger (heavier) than Bob? 
*/
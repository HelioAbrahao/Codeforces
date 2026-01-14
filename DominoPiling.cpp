#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int m, n;
    cin >> m >> n;

    int quantity = m * n;
    int answer = floor((double)quantity/2);

    cout << answer << endl; 

    return 0;
}
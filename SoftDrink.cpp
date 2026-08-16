#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // n -> number of friends
    // k -> number of bottles
    // l -> mililiters of the drink per bottle
    // c -> number of limes 
    // d -> number of slices 
    // p -> grams of salt 

    int n, k, l, c, d, p, nl, np; 

    // to make a toast: nl mililiters, a slice and np grams of salt. 
    
    cin >> n >> k >> l >> c >> d >> p >> nl >> np; 
    int mls_totais = k * l; 
 
    int resultado = min({(mls_totais/nl), (c * d), (p/np)});

    cout << resultado/n << endl; 

    return 0; 
}


// This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

// To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?
// Input

// The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.
// Output

// Print a single integer — the number of toasts each friend can make.
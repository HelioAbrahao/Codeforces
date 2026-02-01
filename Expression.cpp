#include<iostream>
using namespace std;

int maximum(int a, int b, int c, int d){
    if(a > b && a > c && a > d){
        return a;
    } else if (b > a && b > c && b > d){
        return b;
    } else if (c > a && c > b && c > d){
        return c; 
    } else {
        return d; 
    }
}

int main(){
    int a, b, c;
    cin >> a;
    cin >> b; 
    cin >> c;

    int res1, res2, res3, res4, res5, res6, res7, res8; 
    
    res1 = a * b * c;
    res2 = a + b + c; 
    res3 = a + b * c;
    res4 = a * b + c;

    res5 = (a + b) * c;
    res6 = (a * b) + c;
    res7 = a + (b * c);
    res8 = a * (b + c);

    int answer = maximum(res1, res2, res3, res4);
    int answer2 = maximum(res5, res6, res7, res8); 
    
    int defAnswer = max(answer, answer2);

    cout << defAnswer << endl; 

    return 0;
}


// 1, 2, 3 
// 1 + 2

// a * b * c
// a + b + c
// a + b * c
// a * b + c

// (a + b) * c
// (a * b) + c
// a + (b * c)
// a * (b + c) 
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;

    int sum = 0; 
    for(int i = 0; i < number; i++){
        string str; 
        cin >> str; 

        if(str == "Tetrahedron"){
            sum += 4; 
        } else if(str == "Cube"){
            sum += 6; 
        } else if(str == "Octahedron"){
            sum += 8;
        } else if(str == "Dodecahedron"){
            sum += 12;
        } else if(str == "Icosahedron"){
            sum += 20; 
        }
    }

    cout << sum << endl; 

    return 0; 
}
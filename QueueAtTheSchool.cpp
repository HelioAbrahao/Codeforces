#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number_of_childrens, time; 

    cin >> number_of_childrens >> time; 
    string str;
    cin >> str; 

    for(int i = 0; i < time; i++){
        for(int j = 0; j < number_of_childrens; j++){
            if(str[j] == 'B' && str[j + 1] == 'G'){
                swap(str[j], str[j + 1]);
                j++;
            }
        } 
    } 

    cout << str << endl;

    return 0;
}

/*
Constructive algorithms, graph matching, implementation, shortest paths
*/

// BGGBG

// GBGGB (DELE)
// GBGBG (MEU)
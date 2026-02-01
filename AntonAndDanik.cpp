#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // Once they played n games for each game it's known who was the winner, anton or danik.

    int number;
    cin >> number;

    string str;
    cin >> str; 

    int number_of_a = 0;
    int number_of_d = 0; 

    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'A'){
            number_of_a++;
        } else {
            number_of_d++;
        }
    }
    // cout << number_of_a << endl;
    // cout << number_of_d << endl;
    // cout << "-------------------------------" << endl; 
   

    if(number_of_a > number_of_d){
        cout << "Anton" << endl;
    } else if(number_of_a < number_of_d){
        cout << "Danik" << endl; 
    } else {
        cout << "Friendship" << endl; 
    }

    return 0;
}
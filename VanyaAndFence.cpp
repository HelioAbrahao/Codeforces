#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number_of_friends, height_of_the_fence; 
    cin >> number_of_friends >> height_of_the_fence; 

    // walking usual -> width = 1
    // bent person -> width = 2

    int sum = 0;
    int number = 0;
    for(int i = 0; i < number_of_friends; i++){
        cin >> number;
        if(number > height_of_the_fence){
            sum = sum + 2;
        } else {
            sum++; 
        }
    }

    cout << sum << endl; 

    return 0;
}

// height h
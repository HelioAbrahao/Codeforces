#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    // One tram line, n stops numbered from 1 to n in order of tram's movement. At the i-th stop a passengers exit the tram, while b passengers enter it. The tram is empty before it arrives at the first stop. Also, when the tram arrives at the last stop, all passengers exit so that it becomes empty. 

    // Note that at each stop all exiting passengers exit before any entering passengers enters the tram. 

    int number, entering, exiting;
    cin >> number;

    int v = 0; 
    int maximum = 0;
    for(int i = 0; i < number; i++){
        cin >> exiting >> entering; 
        v += entering - exiting; 
        if(v > maximum){
            maximum = v; 
        }
        // maximum = 3
        // maximum = 
    }

    cout << maximum << endl; 

    return 0;
}
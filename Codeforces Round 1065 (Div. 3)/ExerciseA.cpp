#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int np = 0;
        cin >> np; 
        
        if((np % 2 != 0)){
            cout << 0 << endl;  
            continue; 
        } else {
            if(np == 2){
                cout << 1 << endl;
                continue;  
            } else {
                if(np % 4 == 0){
                    cout << (np/4) + 1 << endl; 
                } else if(np % 4 != 0){
                    cout << (np/2) - 1 << endl; 
                }
            }
        }
    }

    return 0; 
}

// Only chickens and cows live on the farm 
// The first line contains a single integer -> The number of test cases. 
// n -> quantidade de patas, basicamente
// Então precisamos mostrar quantas configurações são possíveis a partir da quantidade de patas. Para 4 patas, por exemplo, só haveriam duas combinações possíveis. Uma onde há apenas 1 vaca e 0 galinhas. Ou outra onde há apenas 2 galinha e zero vacas. 
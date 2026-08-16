#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int alice, bob, charlie; 
        cin >> alice >> bob >> charlie; 

        int m = 0; 
        while(alice != bob && alice != charlie && bob != charlie){
            if(alice < bob && alice < charlie && bob > charlie){
                alice++;
                bob--;
            } else if(alice < bob && alice < charlie && charlie > bob){
                alice++;
                charlie--;
            } else if(bob < alice && bob < charlie && alice > charlie){
                bob++;
                alice--;
            } else if(bob < alice && bob < charlie && charlie > alice){
                bob++;
                charlie--; 
            } else if(charlie < alice && charlie < bob && alice > bob){
                charlie++;
                alice--; 
            } else if(charlie < alice && charlie < bob && bob > alice){
                charlie++;
                bob--; 
            }
            m++; 
        }
        cout << m << endl; 
    }

    return 0; 
}

// A. Riptide
// time limit per test
// 1 second
// memory limit per test
// 256 megabytes

// Alice, Bob, and Charlie are playing a game with tokens. They start with a, b, and c tokens, respectively.

// The game is played in rounds. Before the beginning of each round, they check the number of tokens everyone has:

//     If any two players have the exact same number of tokens, the game immediately ends.
//     Otherwise, the round begins, all three players have a strictly different number of tokens. The player with the strictly most tokens gives exactly 1 token to the player with the strictly fewest tokens. 

// Given the starting tokens a, b, and c, determine exactly how many rounds the game will last before it ends.
// Input

// The first line contains a single integer t (1≤t≤103) — the number of test cases.

// Each test case consists of a single line containing three integers a, b, and c (1≤a,b,c≤10).
// Output

// For each test case, output a single integer — the number of rounds the game will last before it ends.
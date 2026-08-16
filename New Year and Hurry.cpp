#include<iostream>
using namespace std;

int SolveFunction(int number_questions, int minutesToTheParty){
    int minutesForQuestions = 240 - minutesToTheParty;

    int counter = 0; 
    for(int i = 1; i <= number_questions; i++){
        int minutes_used_per_question = i * 5; 

        if(minutes_used_per_question > minutesForQuestions){
            break;
        } else {
            minutesForQuestions = minutesForQuestions - minutes_used_per_question;
        }
        counter++;
    }
    return counter; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int number_questions, minutesToTheParty; 
    cin >> number_questions >> minutesToTheParty; 

    cout << SolveFunction(number_questions, minutesToTheParty) << endl; 

    return 0; 
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int number;
    cin >> number;

    string s; 

    for(int i = 0; i < number; i++){
        cin >> s; 
        if(s.size() > 10){
            int variavel = s.size() - 2; 
            string str = to_string(variavel); 
            s.replace(1, s.size()-2, str); 
            cout << s << endl;
        } else {
            cout << s << endl; 
        }
    }

    return 0;
}

// Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special abbreviation.
// "Localization" will be spelt as "l10n", and "internationalization" will be spelt as "i18n". 
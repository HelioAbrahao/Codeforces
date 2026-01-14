#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> ps(v.size());

    ps[0] = v[0];
    for(int i = 1; i < v.size(); i++){
        ps[i] = ps[i - 1] + v[i];
    }

    int soma_1_3 = ps[3] - ps[0];
    int soma_0_4 = ps[4];

    cout << soma_1_3 << endl;
    cout << soma_0_4 << endl;

    return 0;
}
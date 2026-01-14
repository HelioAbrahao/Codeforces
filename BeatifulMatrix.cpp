#include<iostream>
using namespace std;

void swap_matrix_rows(int m[5][5], int i){
    for(int j = 0; j < 5; j++){
        if(i == 3 || i == 4){
            swap(m[i][j], m[i - 1][j]); 
        } else {
            swap(m[i][j], m[i + 1][j]);
        }
    }
}

void swap_matrix_columns(int m[5][5], int i){
    for(int j = 0; j < 5; j++){
        if(i == 3 || i == 4){
            swap(m[j][i], m[j][i - 1]);
        } else {
            swap(m[j][i], m[j][i + 1]); 
        }
    }
}

// void print_matrix(int m[5][5]){
//     for(int i = 0; i < 5; i++){
//         for(int j = 0; j < 5; j++){
//             cout << m[i][j] << " "; 
//         }
//         cout << endl; 
//     }
// }

int locate_x(int m[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
           if(m[i][j] == 1){
            return i;
           } 
        }
    }
}

int locate_y(int m[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(m[i][j] == 1){
                return j;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int mat[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> mat[i][j]; 
        }
    }

    int sum = 0;
    int x = locate_x(mat); 
    int y = locate_y(mat); 
    while(x != 2 || y != 2){
        if(locate_x(mat) < 2 || locate_x(mat) > 2){
            swap_matrix_rows(mat, locate_x(mat));
            sum++;
            x = locate_x(mat); 
        } 
        if(locate_y(mat) < 2 || locate_y(mat) > 2){
            swap_matrix_columns(mat, locate_y(mat));
            sum++;
            y = locate_y(mat); 
        }
    }

    // cout << "------------------------------------------------" << endl; 

    // print_matrix(mat); 
    //    1 2 3 4 5
    //    2
    //    3
    //    4
    //    5

    cout << sum << endl; 

    return 0;
}
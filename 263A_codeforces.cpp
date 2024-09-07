#include <iostream>
using namespace std;

int main(){
    int M[5][5], mov;

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> M[i][j];
        }
    }


    if(M[0][0] == 1 || M[4][0] == 1 || M[4][4] == 1 || M[4][0] == 1){
                mov = 4;
    }else if(M[0][1] == 1 || M[0][3] == 1 || M[1][0] == 1 || M[1][4] == 1 ||  M[3][0] == 1 ||  M[3][4] == 1 ||  M[4][1] == 1 ||  M[4][3] == 1){
                mov = 3;
    }else if(M[0][2] == 1 || M[2][0] == 1 || M[2][4] == 1 || M[4][2] == 1 || M[1][1] == 1 || M[1][3] == 1 || M[3][1] == 1 || M[3][3] == 1){
                mov = 2;
    }else if(M[1][2] == 1 || M[2][1] == 1 || M[2][3] == 1 || M[3][2] == 1){
                mov = 1;
    }else if(M[2][2] == 1){
                mov = 0;
    }        
     

    cout << mov << endl;

    
    return 0;
}
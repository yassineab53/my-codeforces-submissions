#include <iostream>
using namespace std;

int main(){
    int n , res = 0;
    cin >> n;

    string s[n];
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
    }

    for(int i = 0 ; i < n ; i++){
        if(s[i][1] == '+') res++;
        else res--;
    }


    cout << res << endl;

    /* for(int i = 0 ; i < n ; i++){
        if(s[i][1] == '+') res++;
        else if(s[i][1] == '-') res--;
    } */

    

    // for(int i = 0 ; i < n ; i++){
    //     if((s[i][0] == 'X' && s[i][1] == '+') || s[i][0] == '+'){
    //         res++;
    //     }else if()
    // }

    // cout << s[0][0] << endl;

   /*  for(int i = 0 ; i < n ; i++){
        cout << s[i] << endl;
    } */



    return 0;
}
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int p[n] , q[n];
    for(int i = 0 ; i < n ; i++){
        cin >> p[i] >> q[i];
    }

    int k = 0;
    for(int i = 0 ; i < n ; i++){
        if(q[i] - p[i] >= 2) k++;
    }

    cout << k << endl;

    return 0;
}
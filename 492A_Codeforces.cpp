#include <iostream>
using namespace std;

int main(){

    int n, h = 0, k = 0;
    cin >> n;

    for(int i = 1 ; i <= n ; i=i+k){
        if(k >= n) break;
        k += i;
        h++;
    }   

    cout << h << endl;
    return 0;
}
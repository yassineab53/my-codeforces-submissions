#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;
    int s[n] , sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
        sum += s[i];
    }

    float var = (sum / 4) ;
    //double c = ceil(var);
    // int c = floor(sum / 4) ;
    // int c = round(sum / 4) ;

    
    

    cout << var << '\n';

    
    return 0;
}
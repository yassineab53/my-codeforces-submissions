#include <iostream>
using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    
    int m[n][3];

    for(int i = 0 ; i < n ; i++){
        cin >> m[i][0] >> m[i][1] >> m[i][2];
    }

    for(int i = 0 ; i < n ; i++){
        if(m[i][0] + m[i][1] + m[i][2] >= 2) cnt++;
    }

    cout << cnt << endl;

    return 0;
}
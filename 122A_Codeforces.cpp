#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 744 == 0){
        printf("%s", "YES");
    }else{
        cout << "NO";
    }

    return 0;
}
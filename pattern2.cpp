#include<iostream>

using namespace std;

int main(){

    int i, j , num=11;

    for(i=5; i>=1; i--){

        for(j=i; j<=4; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }

    

    return 0;
}

// 11
// 12 13
// 14 15 16
// 17 18 19 20
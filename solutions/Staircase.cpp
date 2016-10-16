#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int sp = 0; sp < (n-i); sp++) {
            cout <<" ";
        }
        for(int j = 0; j < i; j++ ) {
            cout <<"#";
        }
        cout <<std::endl;
    }
    return 0;
}

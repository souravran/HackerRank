#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        cin >> x >> y >> z;
        long totalPrice = 0;
        long convBlack = b*(y+z);
        long costBlack = b*x;
        long convWhite = w*(x+z);
        long costWhite = w*y;
        if(convBlack > costBlack) {
            totalPrice += costBlack; 
        }
        else {
            totalPrice += convBlack;
        }
        
        if(convWhite > costWhite) {
            totalPrice += costWhite; 
        }
        else {
            totalPrice += convWhite;
        }
        cout << totalPrice << endl;
    }

    return 0;
}


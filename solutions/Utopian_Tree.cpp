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
        int n;
        cin >> n;
        bool countSpring = false;
        int height = 1;

        while(n != 0) {
            n--;
            if(!countSpring) {
                height *= 2;
                countSpring = true;
                continue;
            }
            if(countSpring) {
                height += 1;
                countSpring = false;
                continue;
            }
        }
        cout << height << endl;
    }
    return 0;
}

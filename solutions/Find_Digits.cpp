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
        long n, tempn;
        cin >> n;
        tempn = n;
        vector<int> numStore;
        int digit;
        while(n) {
            digit = n % 10;
            n = n / 10;
            if(digit != 0) {
                numStore.push_back(digit);
            }
        }
        
        int countDivisibility = 0;
        for(auto dig : numStore) {
            if((tempn % dig) == 0) {
                countDivisibility++;
            }
        }
        cout << countDivisibility <<std::endl;
    }
    return 0;
}

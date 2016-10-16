#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    cin >> num;
    vector<long> numStore;
    long p;
    for(unsigned int i=0; i<num; i++) {
        cin >> p;
        numStore.push_back(p);
    }
    std::sort(numStore.begin(), numStore.end(), [](long &leftNum, long &rightNum){return leftNum < rightNum;});
    for(auto ele : numStore) {
        cout << ele <<" ";
    }
    return 0;
}


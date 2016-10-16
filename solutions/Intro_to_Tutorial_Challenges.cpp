#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p, srchNum, index;
    vector<int> numStore;
    cin >> srchNum >> index;
    for(int i=0; i<index; i++) {
        cin >> p;
        numStore.push_back(p);
    }
    int ctr = 0;
    for(auto ele : numStore) {
        if(ele == srchNum) {
            cout << ctr ;
            break;
        }
        ctr++;
    }
    return 0;
}


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
    int p;
    vector<int> numStore;
    for(unsigned int i=0; i<num; i++) {
        cin >> p;
        numStore.push_back(p);
    }
    int pos;
    cin >> pos;
    numStore.erase(numStore.begin()+(pos-1));
    int left, right;
    cin >> left >> right;
    numStore.erase(numStore.begin()+(left-1), numStore.begin()+(right-1));
    cout << numStore.size() << endl;
    for(auto n : numStore) {
        cout << n << " ";
    }
    return 0;
}

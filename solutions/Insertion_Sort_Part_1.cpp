#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    unsigned int num;
    cin >> num;
    vector<int> numStore;
    int p;
    for(int i=0; i<num; i++) {
        cin >> p;
        numStore.push_back(p);
    }
    int v = numStore.at(num-1);
    for(int j=num-2; j>=0; j--) {
        if(numStore.at(j) > v) {
            numStore.at(j+1) = numStore.at(j);
            if(j==0) {
                for(auto t : numStore) {
                    cout << t << " ";
                }
                cout << endl;
                numStore.at(j) = v;
            }
            for(auto t : numStore) {
                cout << t << " ";
            }
            cout << endl ;
        }
        else {
            numStore.at(j+1) = v;
            for(auto t : numStore) {
                cout << t << " ";
            }
            break;
        }
    }
    return 0;
}

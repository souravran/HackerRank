#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testCases;
    cin >> testCases;
    while(testCases--) {
        unsigned int num;
        cin >> num;
        cout << (unsigned int) ~(num) << endl;
    }
    return 0;
}

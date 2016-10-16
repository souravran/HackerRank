#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int testCase;
    cin >> testCase;
    while(testCase--) {
        string testStr;
        cin >> testStr;
        int count = 0;
        for(long i=1; i<testStr.length(); i++) {
            if(testStr[i-1] == testStr[i]) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}


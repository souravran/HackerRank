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
        std::string testStr;
        std::string testStrReverse;
        cin >> testStr;
        
        testStrReverse = testStr;
        reverse(testStrReverse.begin(),testStrReverse.end());
        
        bool isFunny = true;
        for(int i=1; i<testStr.length(); ++i) {
            if(abs(testStr[i] - testStr[i-1]) != abs(testStrReverse[i] - testStrReverse[i-1])) {
                isFunny = false;
            }
        }
        if(isFunny) {
            cout << "Funny" << std::endl;
        }
        else {
            cout << "Not Funny" << std::endl;
        }
    }
    return 0;
}


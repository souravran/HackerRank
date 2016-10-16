#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    std::string testStr;
    map<char, int> alphIndexer;
    while (getline(cin, testStr)) {
        for(char& c : testStr) {
            if (( c >= 'a' && c <= 'z' ) || ( c >= 'A' && c <= 'Z' )) {
                if( c >= 'a' && c <= 'z' ) {
                    c = c - 32;
                }
                alphIndexer[c] += 1;
            }
        }
    }
    if(alphIndexer.size() == 26) {
        cout << "pangram" << std::endl;
    }
    else {
        cout << "not pangram" << std::endl;
    }
    return 0;
}


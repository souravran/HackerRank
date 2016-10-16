#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
	const int Z=10000;
	int N,S,P,Q,i=1;
	cin >> N >> S >> P >> Q;
	unordered_set<int> se={S};
	for(;i<min(N,Z);i++){
		S=((long long)S*P+Q)%0x80000000;
		if(se.find(S)!=se.end())break;
		se.insert(S);
	}
	cout << (i==Z ? N : i);
    return 0;
}

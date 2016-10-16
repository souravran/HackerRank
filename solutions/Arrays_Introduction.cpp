#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    int *arr;
    cin >> num;
    arr = new int[num];
    for(int i=0; i<num; i++) {
        cin >> arr[i];
    }
    for(int i=num-1; i>=0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}

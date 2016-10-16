#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    long primarySum = 0;
    long secondarySum = 0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
       primarySum += a[a_i][a_i];
       secondarySum += a[a_i][(n-1)-a_i];
    }
    cout << abs(primarySum - secondarySum);
    return 0;
}

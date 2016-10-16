#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip> 

using namespace std;


int main(){
    int n;
    cin >> n;
    double countPos = 0, countNeg = 0, countZero = 0;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i] > 0) {
           countPos++;
       }
       else if(arr[arr_i] == 0) {
           countZero++;
       }
       else {
           countNeg++;
       }
    }
    cout << std::fixed;
    cout << std::setprecision(6) << countPos/n << std::endl;
    cout << std::setprecision(6) << countNeg/n << std::endl;
    cout << std::setprecision(6) << countZero/n << std::endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int line, query;
    cin >> line >> query;
    int **numStore = new int*[line];
    for(int i = 0; i < line; i++) {
        int size;
        cin >> size;
        numStore[i] = new int[size];
        for(int j = 0; j < size; j++) {
            cin >> numStore[i][j];
        }
    }
    while(query--){
        int k,l;
        cin >> k >> l;
        cout << numStore[k][l] << endl;
    }
	return 0;
}


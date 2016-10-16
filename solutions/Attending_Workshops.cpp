#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops

struct Available_Workshops {
    int numWorkShop;
    vector<std::pair<int, int>> wrkStore;
};

Available_Workshops* initialize(int start_time[], int duration[], int n) {
    Available_Workshops* retVal;
    if(n != 0) {
        retVal = new Available_Workshops();
        retVal->numWorkShop = n;
        //retVal->wrkStore = new vector<std::pair<int, int>>[n];
        for(int i = 0; i < n; i++) {
            retVal->wrkStore.push_back(std::make_pair(start_time[i], (start_time[i] + duration[i])));
        }
    }
    return retVal;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    int count = 0;
    int endTime = 0;
    std::sort(ptr->wrkStore.begin(), ptr->wrkStore.end(), [](const std::pair<int,int> &leftData, const std::pair<int,int> &rightData){return leftData.second < rightData.second;});
    for(int i = 0; i < ptr->numWorkShop; i++) {
        //cout << "[" << ptr->wrkStore[i].first << ", "<< endTime << "]";
        if(ptr->wrkStore[i].first >= endTime) {
            count++;
            endTime = ptr->wrkStore[i].second;
        }
        //cout <<"  "<< ptr->wrkStore[i].second;
        
    }
    return count;
} 

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}

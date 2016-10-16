#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    string time;
    cin >> time;
    string token;
    vector <std::string> timeStore;
    stringstream inputTime(time);
    
    while(std::getline(inputTime, token, ':')) {
        timeStore.push_back(token);
    }
    
    int hour;
    stringstream ss(timeStore[0]);
    ss >> hour;
    if(timeStore[2].substr(timeStore[2].length()-2) == "PM") {
        if (hour < 12) {
            hour +=12;
            ss.clear();
            ss << hour;
            timeStore[0] = ss.str();
        }
    }
    else {
        if (hour == 12) {
            timeStore[0] = "00";
        }
    }

    cout << timeStore[0] <<":"<< timeStore[1] <<":"<< timeStore[2].substr(0, 2);
    
    return 0;
}


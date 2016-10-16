#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
  public:
    void set_age(int pAge) {
        mAge = pAge;
    }
    int get_age() {
        return mAge;
    }
    void set_standard(int pSt) {
        mSt = pSt;
    }
    int get_standard() {
        return mSt;
    }
    void set_first_name(string pFname) {
        mFname = pFname;
    }
    string get_first_name() {
        return mFname;
    }
    void set_last_name(string pLname) {
        mLname = pLname;
    }
    string get_last_name() {
        return mLname;
    }
    string to_string() {
        string retVal = "";
        retVal += std::to_string(mAge) + "," + mFname + "," + mLname + "," + std::to_string(mSt);
        return retVal;
    }
  private:
    int mAge, mSt;
    string mFname, mLname;
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


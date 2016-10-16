#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements {
  public:
    AddElements(T arg) {element=arg;}
    T add(T ele) {return element+ele;}
    T concatenate(T ele) {return element+ele;}
  private:
    T element;
};

#include <cmath>
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

class Calculator {
protected:
    void add();
    void substract();
    void multiply();
    void division();

public:
    void choose_from_calc();
};

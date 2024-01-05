#include <cmath>
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

class Calculator {
protected:
   virtual void add();
   virtual void substract();
   virtual void multiply();
   virtual void division();

public:
    void choose_from_calc();
};

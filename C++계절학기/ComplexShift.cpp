#include "ComplexShift.h"
#include <ostream>
using namespace std;
ostream& operator <<(ostream& os, const ComplexShift & c){
    os<< c.r <<"+"<<c.i<<"i"<<endl;
    return os;
}


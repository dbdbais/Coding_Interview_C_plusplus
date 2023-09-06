#include "Cell.h"

using namespace std;

Cell::Cell() {}
Cell::Cell(int val) {
    this->type = INT;
    this->intVal =val;
}
Cell::Cell(double val) {
    this->type = DOUBLE;
    this->doubleVal = val;
}
Cell::Cell(std::string value){
    this->type = STRING;
    this->stringVal = value;
}


CELL_TYPE Cell::getType() const {
    return this->type;
}
std::string Cell::getStringVal() const {
    return this->stringVal;
}

int Cell::getIntVal() const {
    return this->intVal;
}

double Cell::getDoubleVal() const {
    return this->doubleVal;
}

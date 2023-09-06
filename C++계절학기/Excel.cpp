#include "Excel.h"
#include <iostream>
using namespace std;
Excel::Excel(std::vector<std::vector<Cell>> data) {
    this->data = data;
}

double Excel::average(int fromRow, int fromCol, int toRow, int toCol) const {
    int size = toRow - fromRow +1;
    double sum = 0;
    for(int i=fromRow;i<=toRow;i++){
        if(this->data[i][fromCol].getType() ==INT){
            //cout<<this->data[i][fromCol].getIntVal()<<endl;
            sum += this->data[i][fromCol].getIntVal();
        }
        else{
            //cout<<this->data[i][fromCol].getDoubleVal()<<endl;
            sum += this->data[i][fromCol].getDoubleVal();
        }
    }
    return sum/size;
}

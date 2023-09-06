

#ifndef SUMMER_EXCEL_H
#define SUMMER_EXCEL_H
#include <iostream>
#include <vector>
#include "Cell.h"
#endif //SUMMER_EXCEL_H
class Excel {
public:
    Excel(std::vector<std::vector<Cell>> data);
    double average(int fromRow, int fromCol, int toRow, int toCol) const;
private:
    std::vector<std::vector<Cell>> data;
};

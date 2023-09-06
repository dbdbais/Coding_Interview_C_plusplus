//
// Created by newbi on 2023-07-12.
//

#include "FunctorStudent.h"

int main() {
    std::vector<FunctorStudent> students {{"Kim", GRADE(1)}, {"Kim", GRADE(2)}, {"Lee", GRADE(2)}, {"Choi", GRADE(3)}, {"Choi", GRADE(4)}, {"Park", GRADE(2)}, {"Hwang", GRADE(4)}};
    std::sort(std::begin(students), std::end(students), FunctorStudent::Compare());
    for (auto& s: students)
        std::cout << s << std::endl;
}
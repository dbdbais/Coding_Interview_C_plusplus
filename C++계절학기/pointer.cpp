//
// Created by newbi on 2023-07-17.
//

#include "pointer.h"
void update(int* a, int* b){
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;
}

//
// Created by newbi on 2023-07-18.
//
// implements your code
#include "Student.h"
#include "my_make_unique.h"
int main()

{

    Student s1{"Kim", 2};

    Student s2{"Park", 3};

    auto s3 = my_make_unique<Student>("Lee", 4);



    cout<< s1 << endl;

    cout<< s2 << endl;

    cout<< *s3 << endl;



    return 0;

}
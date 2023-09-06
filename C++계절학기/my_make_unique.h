
#include<iostream>
#include<memory>
#include<string>
using namespace std;

template<typename T, typename... Args>
unique_ptr<T> my_make_unique(Args &&... args);


class Student;

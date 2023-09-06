#include <iostream>
#include <memory>
#include <vector>

using namespace std;

struct STUDENT {
    string name;
    int age;
};

unique_ptr<STUDENT> createStudent (string name, int age) {

    auto student = unique_ptr<STUDENT> (new STUDENT());

    student->name = name;

    student->age = age;

    return student;

}

void printStudentInfo(const STUDENT& student){

    cout << student.name << " " << student.age << endl;

}
int main() {
    int n;
    cin>>n;
    vector <unique_ptr<STUDENT>> vec;
    for (int i=0;i<n;i++){
    string name;
    int age;
    cin >> name >> age;
    vec.push_back(createStudent(name,age));
    }
    for (auto &elem: vec){
        printStudentInfo(*elem);
    }

}
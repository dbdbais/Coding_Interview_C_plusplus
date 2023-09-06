#include <iostream>
using namespace std;

void println(string str);

void println(string str) {

    str.push_back('\n');

    cout << str;

}
int main() {

    string str = "hello, world!";

    println(str);

    for (int i=0; i <3; i++)

        println(str);

}
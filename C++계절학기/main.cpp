#include"Stack.h"
int main() {

    Stack<char> stack(1);

    stack.push('a');

    stack.pop(); stack.pop();

    stack.print();

}
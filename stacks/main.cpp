#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    stack example_stack; //stackType is current int, so I'm using a loop to insert random integers to the stack.
    while(!example_stack.isFull()){
        int randomNumber = 1;
        example_stack.push(randomNumber);
    }

    example_stack.printItems();
    example_stack.pop();
    example_stack.printItems();

    return 0;
}
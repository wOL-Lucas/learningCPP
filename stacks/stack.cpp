#include <iostream>
#include "stack.h"

using namespace std;

stack::stack(){
    size = 0;
    structure = new stackType[maxStackSize];
};

stack::~stack(){
    delete [] structure;
};

bool stack::isFull(){
    return(size == maxStackSize);
};

bool stack::isEmpty(){
    return(size == 0);
};

void stack::push(stackType item){
    if(!stack::isFull()){
        structure[size] = item;
        size++;
    }
    else{
        cout << "Can't insert any more items. Stack is full\n";
    }
}

stackType stack::pop(){
    if(!stack::isEmpty()){
        size--;
        return structure[size];
    }
};

void stack::printItems(){
    cout << "pilha: [";
    for( int i = 0; i < size; i++){
        cout << structure[i];
    }
    cout << "]\n";
};

int stack::currentSize(){
    return size;
}

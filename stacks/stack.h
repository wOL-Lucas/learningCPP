typedef int stackType;
const int maxStackSize = 100;

class stack{
    private:
        int size;
        stackType* structure;

    public:
        stack(); //construct
        ~stack(); //destroy

        bool isFull();
        bool isEmpty();
        void push(stackType item);
        stackType pop();
        void printItems();
        int currentSize();

};
class Stack 
{
    size_t top;
    double *arr;
    size_t space;

    public:
    double value;
    Stack(size_t size);
    double pop();
    void push(double new_val);
    double peek();
    bool isEmpty();
    bool isFull();
};

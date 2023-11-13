#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *top = NULL;

void push(int value);
int pop();

void display();
int peek();

int main()
{

    display();
    pop();
    display();

    return 0;
}

void display()

{
    node *current;
    if (top == NULL)
    {
        cout << "stack is empty \n";
    }
    else
    {
        current = top;
        while (current != NULL)
        {
            cout << current->data << '\n';
            current = current->next;
        }
    }
    cout << endl;
};

void push(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = top;
    top = new_node;
};

int pop()
{
    int value;
    node *first_node = top;
    if (top == NULL)
    {
        cout << "The stack is already empty.";
        return -1;
    }
    else
    {
        top = top->next;
        value = first_node->data;
        delete first_node;
        return value;
    };
}
int peek()
{
    if (top == NULL)
    {
        cout << "Stack is Empty\n";
        return -1;
    }
    else
    {
        return top->data;
    }
}

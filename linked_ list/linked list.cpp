#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insertNode(int value);
void deletet_specificNode(int value);
void insertBeginning(int value);
void deleteBeginning();
void delete_end();

void display();

int main()
{
    insertNode(4);
    insertNode(5);
    insertNode(6);
    insertNode(7);
    insertNode(8);
    insertNode(1);
    insertNode(90);
     deletet_specificNode(8);
    display();
    deleteBeginning();
    display();

    return 0;
}

void insertNode(int value)
{
    node *new_node,
        *last;

    new_node = new node;
    new_node->data = value;
    if (head == NULL)
    {
        head = new_node;
        new_node->next = NULL;
    }
    else
    {
        last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
};
void display()

{
    node *current;
    if (head == NULL)
    {
        cout << "List is empty";
    }
    else
    {
        current = head;
        while (current != NULL)
        {
            cout << current->data << '\t';
            current = current->next;
        }
    }
    cout << endl;
};
void deletet_specificNode(int value)
{
    node *current, *previous;
    current = head;
    previous = head;
    if (current->data == value)
    {
        head = current->next;
        free(current);
        return;
    }
    else
    {
        while (current->data != value)
        {
            previous = current;
            current = current->next;
        }

        previous->next = current->next;
        free(current);
    }
}

void insertBeginning(int value)
{
    node *new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
};

void deleteBeginning()
{
    node *first_node = head;
    if (head == NULL)
    {
        cout << "The list is already empty.";
    }
    else
    {
        head = head->next;
        free(first_node);
    }
};
void delete_end()
{
    if (head == NULL)
    {
        cout << "List is Empty";
        return;
    }
    else if (head->next == NULL)
    {
        delete (head);
        head = NULL;
        return;
    }
    else
    {
        node *ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete (ptr->next);
        ptr->data = NULL;
    }
}

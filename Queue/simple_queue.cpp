#include <iostream>
using namespace std;

#define SIZE 5
int front = -1, rere = -1;
int queue[SIZE];
void enqueue(int value);
void dequeue();
int peek();
void display();
int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
    peek();
    dequeue();
    display();

    return 0;
}
void enqueue(int value)
{
    if (rere != SIZE - 1)
    {
        if (front == -1 && rere == -1)
        {
            front++;
            queue[++rere] = value;
        }
        else
        {
            queue[++rere] = value;
        }
    }
    else
    {
        cout << "Queue is full" << endl;
    }
}
void dequeue()
{
    if (front != -1 && rere != -1 && front <= rere)
    {
        front++;
    }
    else
    {
        cout << "queue is alreade empty \n";
    }
};
int peek()
{
    if (front != -1 && rere != -1 && front <= rere)
    {
        return queue[front];
    }
    else
    {
        cout << "queue is alreade empty \n";
        return -1;
    }
}
void display()
{
    if (front != -1 && rere != -1 && front <= rere)
    {
        for (int i = front; i <= rere; i++)
        {
            cout << queue[i] << '\t';
        }
    }

    else
    {
        cout << "queue is alreade empty \n";
    }
    cout << endl;
};

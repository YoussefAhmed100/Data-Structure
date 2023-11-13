#include <iostream>
using namespace std;
struct student
{
    char name[10];
    int id;
    int mark;
};
void inputData(student user[], int i);
void outputData(student user[], int i);

int main()
{
    int i = 0;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student user[n];
    for (i = 0; i < n; i++)
    {
        inputData(user, i);
    }
    for (i = 0; i < n; i++)
    {
        outputData(user, i);
    }

    return 0;
}
void inputData(student user[], int i)
{
    cout << "Enter the data for student " << i + 1 << endl;
    cin >> user[i].name;
    cin >> user[i].id;
    cin >> user[i].mark;
};

void outputData(student user[], int i)
{
    cout << "Name : " << user[i].name << endl;
    cout << "ID   : " << user[i].id << endl;
    cout << "Mark : " << user[i].mark << endl;
    cout << "**************************************\n";
};

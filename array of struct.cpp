#include <iostream>
#include <string>
using namespace std;
struct ATM 
{
	string name = " ";
	int pass = 0;
	double balance = 1000;
};
void input(ATM user[], int i);
void deposit(ATM user[], int i);
void withdraw(ATM user[], int i);
int main()
{
	int i = 0;
	char m = 0;
	ATM user[5];
		cout << "plz,choose user for 1 to 5 :: ";
		cin >> i;
		if (i > 0 && i <= 5)
		{
			input(user, i-1);
		}
		else
		{
			cout << "error! \n";
		}
		cout << "do you wnt to do any other process :: ";
		cin >> m;
		if (m == 'y' || m == 'Y')
		{
			cout << "\n\n______________________\n\n";
			main();
		}
		if (m == 'n' || m == 'N')
		{
			return 0;
		}
		else
		{
			cout << "error!\n";
		}
	return 0;
}
void input(ATM user[], int i)
{
	int choose = 0;

	cout << "plz, Enter your name :: ";
	cin >> user[i].name;
	cout << endl;

	cout << "plz, Enter your passowrd :: ";
	cin >> user[i].pass;
	cout << endl;

	cout << "your account balance = " << user[i].balance << endl;
	if (user[i].pass > 999 && user[i].pass < 9999)
	{
		cout << "<< deposit >> click 1  ,  << withdraw >> click 2  ::  ";
		cin >> choose;
		if (choose == 1)
		{
			deposit(user, i);
		}
		else if (choose == 2)
		{
			withdraw(user, i);
		}
		else
		{
			cout << "error! \n";
		}
	}
	else
	{
		cout << "error wrong password \n";
	}
}
void deposit(ATM user[],int i)
{
	double value = 0;
	cout << "enter value :: ";
	cin >> value;
	cout << endl;
	user[i].balance += value;
	cout << "your account balance = " << user[i].balance << endl;
}
void withdraw(ATM user[],int i)
{
	double value = 0;
	cout << "enter value :: ";
	cin >> value;
	cout << endl;
	user[i].balance -= value;
	cout << "your account balance = " << user[i].balance << endl;
}
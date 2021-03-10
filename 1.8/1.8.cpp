//1.8.cpp
#include "Payment.h"
#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	Payment z;
	Payment::Money p ;
	cout <<" Payment1: " << endl;
	z.Read();
	cout << " ========================================================================= ";
	z.Display();
	cout << " ========================================================================= " << endl;
	cout << " Money: " << endl;
	p.Read();
	cout << " ========================================================================= ";
	p.Display();
	cout << " \n ";
	p.Сomparison();
	return 0;
}
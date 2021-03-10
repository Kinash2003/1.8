//Payment.cpp
#include "Payment.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;
string surname;
string name;
string middlename;
void Payment::Init(double x, double y, double p, double z, double v)
{
	rate = x;
	experience = y;
	іnterest = p;
	spent = z;
	income = v;
}
void Payment::Read()
{
	double x, y, p, z, v;
	cout << " Прізвище = "; cin >> surname;
	cout << " Ім’я = "; cin >> name;
	cout << " По батькові = "; cin >> middlename;
	cout << " Ставка = "; cin >> x;
	cout << " Рік поступлення на роботу = "; cin >> v;
	cout << " Відсоток надбавки = "; cin >> p;
	cout << " Кількість відпрацьованих днів в місяці = "; cin >> z;
	cout << " Кількість робочих днів в місяці = "; cin >> y;
	Init(x, y, p, z, v);
}
void Payment::Display()
{
	cout << endl;
	cout << " Прізвище = " << surname << endl;
	cout << " Ім’я = " << name << endl;
	cout << " По батькові = " << middlename << endl;
	cout << " Кількість відпрацьованих днів в місяці = " << spent << " днів " << endl;
	cout << " Кількість робочих днів в місяці = " << experience << " днів " << endl;
	cout << " Прибутковий податок і пенсійний фонд = 14 % " << endl;
	cout << " Обчислення нарахованої суми = " << іnterestt() << endl;
	cout << " Обчислення утриманої суми = " << accrued() << endl;
	cout << " Обчислення суми, що видається на руки = " << salary() << endl;
	cout << " Стаж = " << incomee() << " років " << endl;
}
double Payment::іnterestt()
{
	return (rate / 100 * іnterest) + rate;
}
double Payment::accrued()
{
	return ((іnterestt()) / 100 * 14);
}
double Payment::salary()
{
	return іnterestt() - accrued();
}
double Payment::incomee()
{
	return 2021 - income;
}
void Payment::Money::Init(long x, long y, long f, long w)
{
	UAH = x;
	UAH2 = y;
	lungs = f;
	multiplicationn = w;
}
void Payment::Money::Init1(double h, double z, double r, double j)
{
	kopec = h;
	kopec1 = z;
	lungs1 = r;
	multiplicationn1 = j;
}

void Payment::Money::Read()
{
	long x, y, f, w;
	double h, z, r, j;
	cout << " Гривні: " << endl;
	cout << " Гривні перша сума більша = "; cin >> x;
	cout << " Гривні друга сума менша = "; cin >> y;
	cout << " Дробове число гривнів = "; cin >> f;
	cout << " Число для множення гривнів = "; cin >> w;
	cout << " Копійки:" << endl;
	cout << " Копійки перша сума більша = "; cin >> h;
	cout << " Копійки друга сума менша = "; cin >> z;
	cout << " Дробове число копійки = "; cin >> r;
	cout << " Число для множення копійки = "; cin >> j;

	Init(x, y, f, w);
	Init1(h, z, r, j);
}
long Payment::Money::addition()
{
	return UAH + UAH2;
}
long Payment::Money::subtraction()
{
	return UAH - UAH2;
}
long Payment::Money::divisionofsums()
{
	return addition() / subtraction();
}
long Payment::Money::lungss()
{
	return sqrt(lungs) / divisionofsums();
}
long Payment::Money::multiplication()
{
	return sqrt(lungs) * multiplicationn;
}
void Payment::Money::Display()
{
	cout << endl;
	cout << " Додавання гривнів = " << addition() << endl;
	cout << " Віднімання гривнів = " << subtraction() << endl;
	cout << " Ділення сум гривнів = " << divisionofsums() << endl;
	cout << " Ділення сум на дробове число для гривнів = " << lungss() << endl;
	cout << " Mноження на дробове число для гривнів = " << multiplication() << endl;
	cout << " Додавання копійок = " << addition1() << endl;
	cout << " Віднімання копійок = " << subtraction1() << endl;
	cout << " Ділення сум копійок = " << divisionofsums3() << endl;
	cout << " Ділення сум на дробове число для копійок = " << lungss3() << endl;
	cout << " Mноження на дробове число для копійок = " << multiplication3() << endl;
}
double Payment::Money::addition1()
{
	return (kopec * 0.01) + (kopec1 * 0.01);
}
double Payment::Money::subtraction1()
{
	return (kopec * 0.01) - (kopec1 * 0.01);
}
double Payment::Money::divisionofsums3()
{
	return addition1() / subtraction1();
}
double Payment::Money::lungss3()
{
	return sqrt((lungs1) * 0.01) / divisionofsums3();
}
double Payment::Money::multiplication3()
{
	return sqrt((lungs1) * 0.01) - (multiplicationn1 * 0.01);
}
void Payment::Money::Сomparison()
{
	if (multiplication() == multiplication3())
		cout << multiplication() << "  дорівнює  " << multiplication3() << " \n ";
	if (multiplication() > multiplication3())
		cout << multiplication() << "  більше  " << multiplication3() << " \n ";
	if (multiplication() < multiplication3())
		cout << multiplication() << "  менше   " << multiplication3() << " \n ";
}

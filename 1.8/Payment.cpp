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
	�nterest = p;
	spent = z;
	income = v;
}
void Payment::Read()
{
	double x, y, p, z, v;
	cout << " ������� = "; cin >> surname;
	cout << " ��� = "; cin >> name;
	cout << " �� ������� = "; cin >> middlename;
	cout << " ������ = "; cin >> x;
	cout << " г� ����������� �� ������ = "; cin >> v;
	cout << " ³������ �������� = "; cin >> p;
	cout << " ʳ������ ������������� ��� � ����� = "; cin >> z;
	cout << " ʳ������ ������� ��� � ����� = "; cin >> y;
	Init(x, y, p, z, v);
}
void Payment::Display()
{
	cout << endl;
	cout << " ������� = " << surname << endl;
	cout << " ��� = " << name << endl;
	cout << " �� ������� = " << middlename << endl;
	cout << " ʳ������ ������������� ��� � ����� = " << spent << " ��� " << endl;
	cout << " ʳ������ ������� ��� � ����� = " << experience << " ��� " << endl;
	cout << " ����������� ������� � �������� ���� = 14 % " << endl;
	cout << " ���������� ���������� ���� = " << �nterestt() << endl;
	cout << " ���������� �������� ���� = " << accrued() << endl;
	cout << " ���������� ����, �� �������� �� ���� = " << salary() << endl;
	cout << " ���� = " << incomee() << " ���� " << endl;
}
double Payment::�nterestt()
{
	return (rate / 100 * �nterest) + rate;
}
double Payment::accrued()
{
	return ((�nterestt()) / 100 * 14);
}
double Payment::salary()
{
	return �nterestt() - accrued();
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
	cout << " �����: " << endl;
	cout << " ����� ����� ���� ����� = "; cin >> x;
	cout << " ����� ����� ���� ����� = "; cin >> y;
	cout << " ������� ����� ������ = "; cin >> f;
	cout << " ����� ��� �������� ������ = "; cin >> w;
	cout << " ������:" << endl;
	cout << " ������ ����� ���� ����� = "; cin >> h;
	cout << " ������ ����� ���� ����� = "; cin >> z;
	cout << " ������� ����� ������ = "; cin >> r;
	cout << " ����� ��� �������� ������ = "; cin >> j;

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
	cout << " ��������� ������ = " << addition() << endl;
	cout << " ³������� ������ = " << subtraction() << endl;
	cout << " ĳ����� ��� ������ = " << divisionofsums() << endl;
	cout << " ĳ����� ��� �� ������� ����� ��� ������ = " << lungss() << endl;
	cout << " M������� �� ������� ����� ��� ������ = " << multiplication() << endl;
	cout << " ��������� ������ = " << addition1() << endl;
	cout << " ³������� ������ = " << subtraction1() << endl;
	cout << " ĳ����� ��� ������ = " << divisionofsums3() << endl;
	cout << " ĳ����� ��� �� ������� ����� ��� ������ = " << lungss3() << endl;
	cout << " M������� �� ������� ����� ��� ������ = " << multiplication3() << endl;
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
void Payment::Money::�omparison()
{
	if (multiplication() == multiplication3())
		cout << multiplication() << "  �������  " << multiplication3() << " \n ";
	if (multiplication() > multiplication3())
		cout << multiplication() << "  �����  " << multiplication3() << " \n ";
	if (multiplication() < multiplication3())
		cout << multiplication() << "  �����   " << multiplication3() << " \n ";
}

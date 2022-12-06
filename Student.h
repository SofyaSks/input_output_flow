#pragma once

#include <iostream>
#include "Windows.h"
#include <iomanip>
#include <string>
using namespace std;


class Student
{
	string FN;
	string LN;
	int age;

public:
	Student();
	Student(string fn, string ln, int age_);
	void Print();
	friend ostream& operator << (ostream& os, Student &st);
};


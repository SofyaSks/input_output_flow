#include "Student.h"

Student::Student() {
	FN = "";
	LN = "";
	age = 0;
}

Student::Student(string fn, string ln, int age_) {
	FN = fn;
	LN = ln;
	age = age_;
}

void Student::Print()
{
	cout << FN << " " << LN << " " << age << endl;
}



ostream& operator<<(ostream& os, Student& st)
{
	os << setw(10) << st.FN << setw(10) << st.LN << setw(10) << st.age <<  endl;
	return os;
}

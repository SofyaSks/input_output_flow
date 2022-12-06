#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include <fstream>

// создать поток (ofstream/ifstream) - write to file, read from file
// fstream - w/r

// create file, open

// file - of/if

// w/r

// close file
 
 // *.* , *.txt - * - любое 
 
// second part
#include <stdio.h>
#include <io.h>
#include <string>

// rename (old_name, new_name)
//remove(name)
// _findfirst(file, "path")

void FileRename();
void FileRemove();
void File_Dir();

int main() {

	/*Student st1("Vasya", "Ivanov", 20);
	Student st2("Vasilisa", "Petrova", 27);
	Student st3("Natali", "Portman", 32);
	Student st4("Chris", "Pratt", 54);
	Student st5("Thomas", "Sangster", 10);

	Student starr[5] = { st1,st2,st3,st4,st5 };

	for (int i = 0; i < 5; i++)
	{
		cout << starr[i] << endl;
	}

	ofstream fout;
	fout.open("student_all.txt", ofstream::out); // вывод
	if (!fout.is_open()) {
		cout << "ERROR! File is not open\n";
	}

	else {
		cout << "File is open" << endl;
		for (int i = 0; i < 5; i++)
		{
			fout.write((char*)&starr[i], sizeof(Student));
		}
		cout << "End of file" << endl;
		fout.close();
	}

	ifstream fin;

	Student newarr[5] = {};

	
	fin.open("student_all.txt");

	if (!fin.is_open()) {
		cout << "Error. File is not open\n";
	}
	else {
		int i = 0;
		cout << "File is open" << endl;
		while (fin.read((char*)&newarr[i], sizeof(Student))) {
			newarr[i].Print();
			i++;
		}
		fin.close();
		cout << "End of read\n";
	}*/
	

	FileRename();
	/*cout << "*************************" << endl;
	FileRemove();
	cout << "*************************" << endl;
	File_Dir();*/

	// SECOND PART

	return 0;
}

void FileRename() {
	char old_name[50], new_name[50];
	cout << "Enter old_name" << endl;
	cin >> old_name;
	cout << "Enter new_name" << endl;
	cin >> new_name;

	if (rename(old_name, new_name) != 0) {
		cout << "Error" << endl;
	}
	else
		cout << "OK" << endl;
}

void FileRemove() {
	char name[50];
	cout << "Enter old_name" << endl;
	cin >> name;
	if (remove(name) !=0) {
		cout << "Error" << endl;
	}
	else
		cout << "OK" << endl;
}

void File_Dir() {
	char path[50];
	cout << "Enter path" << endl;
	cin >> path;
	char mask[15];
	cout << "Enter mask (*.* or *.txt)" << endl;
	cin >> mask;
	strcat(path, mask);
	_finddata_t* fileinfo = new _finddata_t;
	long done = _findfirst(path, fileinfo);
	int tmp = done;
	int count = 0;
	while (tmp!= -1) {
		count++;
		cout << fileinfo->name;
		tmp = _findnext(done, fileinfo);
	}

	cout << "Was found" << count << endl;
	cout << "file(s) in folder ..." << path << endl << endl;
	_findclose(done);
	delete fileinfo;
}
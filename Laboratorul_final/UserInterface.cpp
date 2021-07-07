#include "UserInterface.h"
#include <iostream>
using namespace std;
void UI::addEx() {
	char name[100];
	int grade;
	char date[100];
	cout << "Introduce the name :  ";
	cin >> name;
	cout << "Introduce the grade : ";
	cin >> grade;
	cout << "introduce the date :  ";
	cin >> date;
	Exam newExam(name, date, grade);
	bool i = s.addExam(newExam);
	if (i == 0)
		cout << " Full memory SadChamp " << endl;
	else cout << ".... Done ! PogChamp !" << endl;
}
void UI::deleteEx() {
	int index;
	cout << "Intoduce the index :  ";
	cin >> index;
	bool i = s.deleteExam(index);
	if (i == 0)
		cout << " There is no such exam" << endl;
	else cout << "  * * * * Examus Deletus!* * * * " << endl;
}
void UI::updateEx() {
	int index;
	char name[100];
	int grade;
	char date[100];
	cout << "Introduce the index: ";
	cin >> index;
	cout << "Intoduce the name :  ";
	cin >> name;
	cout << "Intoduce the gade :  ";
	cin >> grade;
	cout << "Intoduce the date :  ";
	cin >> date;
	Exam newExam(name, date, grade);
	bool i = s.updateExam(index, newExam);
	if (i == 0)
		cout << " There is no such exam" << endl;
	else cout << "  * * * * Examus Updateus!* * * * " << endl;
}

void UI::showUI()
{
	cout << "The elements are:  " << endl;
	for (int i = 0; i < s.getSize(); i++) {
		cout << "index: " << i << "    " << s.getAll()[i];
	}
	cout << endl;
}
void UI::moreThan()
{
	int grade;
	cout << "Introduce the grade : ";
	cin >> grade;
	cout << "The elements are:  " << endl;
	for (int i = 0; i < s.moreThan(grade).getSize(); i++) {
		cout << s.moreThan(grade).getAll()[i];
	}
	cout << endl;
}
void UI::addPoint()
{
	char* name = new char[10];
	cout << "Introduce the name : ";
	cin >> name;
	s.addPoint(name);
}
void UI::undo()
{
	s.undo();
}
char UI::meniu()
{
	char op;
	cout << " -------- < Menu > -----------" << endl
		<< "1. Show all the exams :) ;" << endl
		<< "2. Add an exam  " << endl
		<< "3. Delete an exam  " << endl
		<< "4. Modify an exam   " << endl
		<< "5.Show exams with bigger grade  " << endl
		<< "6.Add a point for a certain student  " << endl
		<< "7.Undo" << endl
		<< "8. Close the application." << endl
		<< " My magic number is  ";
	cin >> op;
	return op;
}

int UI::uwu() {
	char op;
	do
	{
		op = meniu();
		switch (op)
		{
		default:
		{
			cout << "there is no such command :/ " << endl;
			break;
		}
		case '1':
		{
			showUI();
			break;
		}
		case '2':
		{
			addEx();
			break;
		}
		case '3':
		{
			deleteEx();
			break;
		}
		case '4':
		{
			updateEx();
			break;
		}
		case '5':
		{
			moreThan();
			break;
		}
		case '6':
		{
			addPoint();
			break;
		}
		case '7':
		{
			undo();
			break;
		}
		case '8':
		{
			op = 0;
			break;
		}
		}


	} while (op);
	return 0;
}

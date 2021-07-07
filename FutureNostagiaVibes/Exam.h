#pragma once
#include <iostream>
#include <ostream>
using namespace std;
class Exam
{
private:
	char* name;
	int grade;
	char* date;
	
public:
	Exam();
	Exam(char* name, int grade, char* date);
	Exam(const Exam& e);
	~Exam();
	char* getName();
	int getGrade();
	char* getDate();
	void setName(char* name);
	void setGrade(int grade);
	void setDate(char* date);
	Exam& operator=(const Exam&);
	bool operator==(const Exam&);
	friend ostream& operator<<(ostream& os, const Exam& e);

};


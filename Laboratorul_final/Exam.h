#pragma once
#include <iostream>
#include <ostream>
using namespace std;
class Exam
{
private:
	char* name;
	char* date;
	int grade;
	
public:
	Exam();
	Exam(const char*, const char*, const int);
	Exam(const Exam&);
	~Exam();
	char* getName();
	int getGrade();
	char* getDate();
	void setName(const char*);
	void setGrade(const int);
	void setDate(const char*);
	Exam& operator=(const Exam&);
	bool operator==(const Exam&);
	friend ostream& operator<<(ostream&, const Exam&);

};


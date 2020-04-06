#include "Exam.h"
#include <string.h>
#include <ostream>
#include <iostream>
#include <cstddef>
#include <sstream>

using namespace std;

Exam::Exam() {
	name = NULL;
	date = NULL;
	grade = 0;
}

Exam::Exam(const char* n, const char* d, const int g) {
	setName(n);
	setDate(d);
	setGrade(g);
}

Exam::Exam(const Exam& e) {
	*this = e;
}

Exam::~Exam() {
	if (name)
		delete[] name;
	if (date)
		delete[] date;
	name = NULL;
	date = NULL;
	grade = 0;
}


char* Exam::getName() {
	return name;
}

int Exam::getGrade() {
	return grade;
}

char* Exam::getDate() {
	return date;
}

void Exam::setName(const char* n) {
	if (name)
		delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Exam::setGrade(const int g) {
	this->grade = g;
}

void Exam::setDate(const char* d) {
	if (date)
		delete[] date;
	date = new char[strlen(d) + 1];
	strcpy_s(date, strlen(d) + 1, d);
}

Exam& Exam::operator=(const Exam & e) {
	setName(e.name);
	setDate(e.date);
	setGrade(e.grade);
	return *this;
}
bool Exam::operator==(const Exam & e) {
	return ((strcmp(name, e.name) == 0) && (grade == e.grade) && (strcmp(date, e.date) == 0));
}
ostream& operator<<(ostream & os, const Exam & e) {
	os << e.name << " " << e.grade << " " << e.date << endl;
	return os;
}
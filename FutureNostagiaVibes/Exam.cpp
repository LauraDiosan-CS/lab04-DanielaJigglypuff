#include "Exam.h"
#include <string.h>
#include <ostream>
#include <iostream>
#include <cstddef>
Exam::Exam() {
	name = NULL;
	grade = 0;
	date = NULL;
}

Exam::Exam(char* n, int g ,char* d) {
	grade = g;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	date = new char[strlen(d) + 1];
	strcpy_s(date, strlen(d) + 1, d);
}

Exam::Exam(const Exam& e) {
	grade = e.grade;
	name = new char[strlen(e.name) + 1];
	strcpy_s(name, strlen(e.name) + 1, e.name);
	date = new char[strlen(e.date) + 1];
	strcpy_s(date, strlen(e.date) + 1, e.date);
}

Exam::~Exam() {
	grade = 0;
	if (this->name) {
		delete[] this->name;
		this->name = NULL;
	}
	if (this->date) {
		delete[] this->date;
		this->date = NULL;
	}
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


void Exam::setName(char* n) {
	if (name) {
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Exam::setGrade(int g) {
	this->grade = g;
}

void Exam::setDate(char* d) {
	if (date) {
		delete[] date;
	}
	date = new char[strlen(d) + 1];
	strcpy_s(date, strlen(d) + 1, d);
}

Exam& Exam::operator=(const Exam & e) {
	this->name = new char[strlen(e.name) + 1];
	strcpy_s(this->name, strlen(e.name) + 1, e.name);
	this->grade = e.grade;
	this->date = new char[strlen(e.date) + 1];
	strcpy_s(this->date, strlen(e.date) + 1, e.date);
	return *this;
}
bool Exam::operator==(const Exam & e) {
	return (strcmp(name, e.name) == 0) && (grade == e.grade) && (strcmp(date, e.date) == 0);
}
ostream& operator<<(ostream & os, const Exam & e) {
	os << e.name << " " << e.grade << " " << e.date << endl;
	return os;
}
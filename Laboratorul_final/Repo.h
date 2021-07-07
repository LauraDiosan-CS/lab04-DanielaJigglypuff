#pragma once
#include"Exam.h"
class Repo {
private:
	Exam allExams[100];
	int size;
public:
	Repo() { size = 0; }
	Repo(Repo& r) { *this = r; }
	~Repo() { size = 0; }
	bool addExam(Exam& e);
	bool deleteExam(int index);
	bool updateExam(int index, Exam& e);
	Exam* getAll() { return allExams; }
	int getSize() { return size; }
	int find(Exam& e);
	Repo& operator=(Repo& r);
};
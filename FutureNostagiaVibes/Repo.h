#pragma once
#include"Exam.h"
class Repo {
private:
	Exam allExams[100];
	int size;
public:
	Repo();
	~Repo();
	void add(Exam& e);
	Exam* getAll();
	int getSize() { return size; };
	int find(Exam& e);
	void deleteExam(Exam& e);
	void updateExam(int index, Exam& e);
};
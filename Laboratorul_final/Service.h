#pragma once
#include <vector>
#include "Repo.h"

class Service {
private:
	Repo repo;
	Repo steps[50];
	int noUndos;
public:
	Service();
	~Service();
	bool addExam(Exam& e);
	bool deleteExam(int index);
	bool updateExam(int index, Exam& e);
	int getSize();
	Exam* getAll();
	int find(Exam& e);
	Repo moreThan(int mark);
	void addPoint(const char* name);
	void undo();
};
#pragma once
#include <vector>
#include "Repo.h"
class Service {
private:
	Repo repo;
public:
	Service();
	~Service();
	void addExam(Exam& e);
	int getSize();
	Exam* getAll();
	int find(Exam& e);
	void deleteExam(Exam& e);
	void updateExam(Exam& e, int index);


};
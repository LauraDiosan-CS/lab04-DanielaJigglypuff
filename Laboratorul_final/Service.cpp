#include "Service.h"
Service::Service() {
	noUndos = 0;
	steps[noUndos + 1] = repo;
}
Service::~Service() {
	noUndos = 0;
}
bool Service::addExam(Exam& e) {
	bool i = repo.addExam(e);
	steps[noUndos++] = repo;
	return i;
}
int Service::find(Exam& e) {
	return repo.find(e);
}
bool Service::deleteExam(int index) {
	bool i = repo.deleteExam(index);
	steps[noUndos++] = repo;
	return i;
}
bool Service::updateExam(int index, Exam& e) {
	bool i = repo.updateExam(index, e);
	steps[noUndos++] = repo;
	return i;
}
int Service::getSize() {
	return repo.getSize();
}

Exam* Service::getAll() {
	return repo.getAll();
}

Repo Service::moreThan(int mark)
{
	Repo filtered;
	for (int i = 0; i < repo.getSize(); i++)
		if (repo.getAll()[i].getGrade() > mark)
			filtered.addExam(repo.getAll()[i]);
	return filtered;
}

void Service::addPoint(const char* name)
{
	for (int i = 0; i < repo.getSize(); i++)
	{
		if (strcmp(repo.getAll()[i].getName(), name) == 0 && repo.getAll()[i].getGrade()!=10)
			repo.getAll()[i].setGrade(repo.getAll()[i].getGrade() + 1);
	}
	steps[noUndos++] = repo;
}

void Service::undo()
{
	noUndos = noUndos - 1;
	repo = steps[noUndos - 1];
}
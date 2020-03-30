#include "Repo.h"
Repo::Repo() {
	size = 0;
}
void Repo::add(Exam& e) {
	if (size >= 100) {
		cout << " Full memory SadChamp " << endl;
		return;
	}
	allExams[size] = e;
	size++;
}
Exam* Repo::getAll() {
	return allExams;
}
Repo::~Repo() {
	size = 0;
}
int Repo::find(Exam& e) {
	for (int j = 0; j < size; j++) {
		if (allExams[j] == e) {
			return j;
		}
	}
	return -1;
}
void Repo::deleteExam(Exam& e) {
	int i = find(e);
	if (i >= 0) {
		allExams[i] =allExams[size - 1];
		size--;
		cout << "  * * * * Examus Deletus!* * * * " << endl;
	}
	else {
		cout << " There is no such exam" << endl;
	}
}
void Repo::updateExam(int index, Exam& e) {
	if (index >= 0 && index < size) {
		allExams[index] = e;
	}
}
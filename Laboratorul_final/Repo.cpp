#include "Repo.h"


bool Repo::addExam(Exam& e) {
	if (size >= 100)
		return 0;
	allExams[size++] = e;
	return 1;
}

int Repo::find(Exam& e) {
	for (int j = 0; j < size; j++)
		if (allExams[j] == e)
			return j;
	return -1;
}
bool Repo::deleteExam(int index) {
	if (index >= 0)
	{
		allExams[index] =allExams[size - 1];
		size--;
		return 1;
	}
	return 0;
}
bool Repo::updateExam(int index, Exam& e) {
	if (index >= 0)
	{
		allExams[index] = e;
		return 1;
	}
	return 0;

}
Repo& Repo::operator=(Repo& r)
{
	size = r.size;
	for (int i = 0; i < size; i++)
		allExams[i] = r.allExams[i];
	return *this;
}
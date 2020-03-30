#include "Service.h"
Service::Service() {

}
Service::~Service() {

}
void Service::addExam(Exam& e) {
	repo.add(e);
}
int Service::find(Exam& e) {
	return repo.find(e);
}
void Service::deleteExam(Exam& e) {
	repo.deleteExam(e);
}
void Service::updateExam(Exam& e, int index) {
	repo.updateExam(index, e);
}
int Service::getSize() {
	return repo.getSize();
}

Exam* Service::getAll() {
	return repo.getAll();
}

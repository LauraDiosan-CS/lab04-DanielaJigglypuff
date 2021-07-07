#include "Test.h"
#include "Repo.h"
#include "Service.h"
#include <assert.h>
#include <string.h>

void test() {
	char* name1 = new char[100];
	char* date1 = new char[100];
	strcpy_s(name1, sizeof"Daniela", "Daniela");
	strcpy_s(date1, sizeof"20.02.2020", "20.02.2020");
	char* name2 = new char[100];
	char* date2 = new char[100];
	strcpy_s(name2, sizeof"Dua", "Dua");
	strcpy_s(date2, sizeof"21.02.2020", "21.02.2020");
	char* name3 = new char[100];
	char* date3 = new char[100];
	strcpy_s(name3, sizeof"Paul", "Paul");
	strcpy_s(date3, sizeof"22.02.2020", "22.02.2020");
	Exam e1(name1, date1, 10);
	Exam e2(name2, date2, 9);
	Exam e3(name3, date3, 10);
	Exam e;
	Exam e4(e3);
	e4.setDate("1");
	e4.setName("a");
	e4.setGrade(1);
	Exam e5("a", "1", 1);
	assert(e5 == e4);
	assert(strcmp(e4.getDate(), "1") == 0 && strcmp(e4.getName(), "a") == 0 && e4.getGrade() == 1);
}
void testRepo() {
	Repo r;
	char* name1 = new char[100];
	char* date1 = new char[100];
	strcpy_s(name1, sizeof"Daniela", "Daniela");
	strcpy_s(date1, sizeof"20.02.2020", "20.02.2020");
	char* name2 = new char[100];
	char* date2 = new char[100];
	strcpy_s(name2, sizeof"Dua", "Dua");
	strcpy_s(date2, sizeof"21.02.2020", "21.02.2020");
	char* name3 = new char[100];
	char* date3 = new char[100];
	strcpy_s(name3, sizeof"Paul", "Paul");
	strcpy_s(date3, sizeof"22.02.2020", "22.02.2020");
	Exam e1(name1, date1, 10);
	Exam e2(name2, date2, 9);
	Exam e3(name3, date3, 10);
	r.addExam(e1);
	r.addExam(e2);
	r.addExam(e3);
	assert(r.getSize() == 3);
	Exam* allExams = r.getAll();
	assert(allExams[0] == e1);
	assert(allExams[1] == e2);
	assert(allExams[2] == e3);
	r.deleteExam(1);
	assert(r.getSize() == 2);
	char* name4 = new char[100];
	char* date4 = new char[100];
	strcpy_s(name4, sizeof"Mihai", "Mihai");
	strcpy_s(date4, sizeof"24.02.2020", "24.02.2020");
	Exam e4(name4, date4, 7);
	r.updateExam(0, e4);
	int i0 = r.find(e4);
	assert(i0 == 0);
}
void testService() {
	Service s;
	char* name1 = new char[100];
	char* date1 = new char[100];
	strcpy_s(name1, sizeof"Daniela", "Daniela");
	strcpy_s(date1, sizeof"20.02.2020", "20.02.2020");
	char* name2 = new char[100];
	char* date2 = new char[100];
	strcpy_s(name2, sizeof"Dua", "Dua");
	strcpy_s(date2, sizeof"21.02.2020", "21.02.2020");
	char* name3 = new char[100];
	char* date3 = new char[100];
	strcpy_s(name3, sizeof"Paul", "Paul");
	strcpy_s(date3, sizeof"22.02.2020", "22.02.2020");
	Exam e1(name1, date1, 10);
	Exam e2(name2, date2, 9);
	Exam e3(name3, date3, 10);
	s.addExam(e1);
	s.addExam(e2);
	s.addExam(e3);
	assert(s.getSize() == 3);
	s.deleteExam(1);
	assert(s.getSize() == 2);
	char* name4 = new char[100];
	char* date4 = new char[100];
	strcpy_s(name4, sizeof"Mihai", "Mihai");
	strcpy_s(date4, sizeof"24.02.2020", "24.02.2020");
	Exam e4(name4, date4, 7);
	s.updateExam(0, e4);
	assert(s.find(e4) == 0);
	s.addPoint("Mihai");
	s.undo();
	assert(s.getAll()[0].getGrade() == 7);
	assert(s.moreThan(1).getSize() == s.getSize());
}

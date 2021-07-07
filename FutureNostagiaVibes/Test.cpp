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
	Exam e1(name1, 10, date1);
	Exam e2(name2, 9, date2);
	Exam e3(name3, 10, date3);
	Exam students[3] = { e1, e2, e3 };
	assert(students[0].getGrade() == 10);
	assert(students[1].getGrade() == 9);
	assert(students[2].getGrade() == 10);
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
	Exam e1(name1, 10, date1);
	Exam e2(name2, 9, date2);
	Exam e3(name3, 10, date3);
	r.add(e1);
	r.add(e2);
	r.add(e3);
	assert(r.getSize() == 3);
	Exam*allExams = r.getAll();
	assert(allExams[0] == e1);
	assert(allExams[1] == e2);
	assert(allExams[2] == e3);
	r.deleteExam(e2);
	assert(r.getSize() == 2);
	int i0 = r.find(e1);
	assert(i0 == 0);
	int i1 = r.find(e3);
	assert(i1 == 1);
	r.add(e2);
	int i2 = r.find(e2);
	assert(i2 == 2);
	char* name4 = new char[100];
	char* date4 = new char[100];
	strcpy_s(name4, sizeof"Mihai", "Mihai");
	strcpy_s(date4, sizeof"24.02.2020", "24.02.2020");
	Exam e4(name4, 7, date4);
	r.updateExam(0, e4);
	i0 = r.find(e4);
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
	Exam e1(name1, 10, date1);
	Exam e2(name2, 9, date2);
	Exam e3(name3, 10, date3);
	s.addExam(e1);
	s.addExam(e2);
	s.addExam(e3);
	assert(s.getSize() == 3);
		s.deleteExam(e2);
	assert(s.getSize() == 2);
	int i0 = s.find(e1);
	assert(i0 == 0);
	int i1 = s.find(e3);
	assert(i1 == 1);
	s.addExam(e2);
	int i2 = s.find(e2);
	assert(i2 == 2);
	char* name4 = new char[100];
	char* date4 = new char[100];
	strcpy_s(name4, sizeof"Mihai", "Mihai");
	strcpy_s(date4, sizeof"24.02.2020", "24.02.2020");
	Exam e4(name4, 7, date4);
	s.updateExam(e4, 0);
	i0 = s.find(e4);
	assert(i0 == 0);
}


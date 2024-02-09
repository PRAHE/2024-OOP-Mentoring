#include <iostream>
using namespace std;

class Person
{
protected:
	int age;
	char name[32];

public:
	Person();
	~Person();
	void Say() { cout << "Hi"; }
};

class Student :public Person 
{
protected:
	char studentNum[11];
	char major[32];
	int schoolYear;

public:
	Student();
	~Student();
	int getAge() { cout << "age?"; cin >> age; return age; }
	char* getName() { cout << "name?"; cin >> name; return name; }
	char* getStudentNum() { cout << "studentNumber?"; cin >> studentNum; return studentNum; }
	char* getMajor() { cout << "major?"; cin >> major; return major; }
	int getSchoolYear() { cout << "schoolYear?"; cin >> schoolYear; return schoolYear; }
	void setAge(int age) { int getAge(); this->age = age; }
	void setName(char* name) { char* getName(); strcpy(this->name, name); }
	void setStudentNum(char* studentNum) { char* getStudentNum(); strcpy(this->studentNum, studentNum); }
	void setMajor(char* major) { char* getMajor(); strcpy(this->major, major); }
	void setSchoolYear(int year) { int getSchoolYear(); this->schoolYear = schoolYear; }
	void Say();
};

class Professor :public Person
{
protected:
	char professorNum[11];
	char major[32];
};

int main() {
	char* job;
	cout << "what do you do?";
	cin >> job;

	if (!strcmp("student", job)) {
		Student* student = new Student;
		
	}
	else if (!strcmp("professor", job)) {
		Professor* professor = new Professor;

	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Employee
{
private:
	char* name;
	int age;
	char* country;
	char* job;

public:
	Employee(char* name, int age, char* country, char* job);
	bool isNameCorrect(char* name);
	void print();
	void change(char* name, int age, char* countrycountry, char* job);

	void setName(char* name) { this->name = name; }
	string getName() { return this->name; }

	void setAge(int age) { this->age = age; }
	int getAge() { return this->age; }

	void setCountry(char* country) { this->country = country; }
	string getCountry() { return this->country; }

	void setJob(char* job) { this->job = job; }
	string getJob() { return this->job; }
};

Employee::Employee(char* name, int age, char* country, char* job){
	setName(name);
	setAge(age); //save age
	setCountry(country);
	setJob(job);
}

int main() {
	char str[50];
	char command[10];
	char name[10];
	int age;
	char country[10];
	char job[10];

	cin >> str;

	while (1) {
		if (strcmp(str, "exit") == 0) {
			break;
		}
		else if (strcmp(str, "insert") == 0) {
			cin >> name;
			cin >> age;
			cin >> country;
			cin >> job;
			Employee* employee = new Employee(name, age, country, job);
			break;
		}
		else if (strcmp(str, "find") == 0) {

		}
		else if (strcmp(str, "change") == 0) {

		}
		else if (strcmp(str, "print") == 0) {

		}

	}

	
	return 0;
}

void insert(char* name, int age, char* country, char* job) {
	Employee* employee = new Employee(name, age, country, job);
}

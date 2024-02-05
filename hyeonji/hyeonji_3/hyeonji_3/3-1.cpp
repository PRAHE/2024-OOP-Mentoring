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
	Employee(char* name, int age, char* country, char* job) {
		name = new char[10];
		strcpy(this->name, name);
		this->age = age;
		country = new char[10];
		strcpy(this->country, country);
		job = new char[10];
		strcpy(this->job, job);
	}
	bool isNameCorrect(char* name);
	void print();
	void exit();
	void insert(char* name, int age, char* country, char* job);
	void find(char* name);
	void change(char* name, int age, char* country, char* job);
};

int main() {
	char str[20];
	char* temp = strtok(str, " ");
	cin >> str;

	while (temp != NULL) { //chop the str
		
		temp = strtok(NULL, " ");
	}
	Employee* employee = new Employee(name, age, country, job);

	cout << employee;
	return 0;

}

void insert(char* name, int age, char* country, char* job) {
	Employee* employee = new Employee(name, age, country, job);
}

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	char* name;
	int age;
	char* country;
	char* job;

public:
	Employee(){ //to make array
		strcpy(name, "none");
		age = 0; //I got error here, how to fix?
		strcpy(country, "none");
		strcpy(job, "none");
	}
	Employee(char* name, int age, char* country, char* job);
	bool isNameCorrect(char* name) { 
		if (strcmp(this->name, name) == 0) //to check correct array
			return true;
		else return false;
	}
	void print() { //to print info
		cout << "====print====" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Country: " << country << endl;
		cout << "Job: " << job << endl;
		cout << "---------" << endl;
	}
	void change(char* name, int age, char* country, char* job) {
		this->name = name;
		this->age = age;
		this->country = country;
		this->job = job;
	}
	void insert(char* name, int age, char* country, char* job) {
		this->name = name;
		this->age = age;
		this->country = country;
		this->job = job;
	}
};

Employee::Employee(char* name, int age, char* country, char* job){
	insert(name, age, country, job);
}

int main() {
	Employee arr[10];
	char str[50];
	char command[10];
	char name[10];
	int age,i = 0;
	char country[10];
	char job[10];
	char newName[10];


	while (i <= 10) { 
		cin >> str; //can get only command

		if (strcmp(str, "exit") == 0) {
			break;
		}
		else if (strcmp(str, "insert") == 0) {
			cin >> name; //get info by buffer, don't need to additional input
			cin >> age;
			cin >> country;
			cin >> job;
			arr[i].insert(name, age, country, job);
		}
		else if (strcmp(str, "find") == 0) {
			cin >> name;
			int count = i; //local variable to use while roop
			while (count > 0) {
				if (arr[i].isNameCorrect(name) == true) {
					arr[i].print();
				}
				else
					count--;
			}

		}
		else if (strcmp(str, "change") == 0) {
			cin >> name;
			cin >> newName;
			cin >> age;
			cin >> country;
			cin >> job;
			int count = i;
			while (count > 0) {
				if (arr[i].isNameCorrect(name) == true) {
					arr[i].change(newName, age, country, job);
				}
				else
					count--;
			}
		}
		else if (strcmp(str, "print") == 0) {
			void print();
		}
		i++;
	}
	return 0;
}

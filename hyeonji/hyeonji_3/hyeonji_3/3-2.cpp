#include <iostream>
using namespace std;

class Student 
{
private:
	char* name;
	int age;
	char* class_name;
};

class School
{
private:
	class Student* student_list[100];
	int size = 0;
};
#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg;


};

int main(){
	Student student1;
	Student student2;

	student1.name = "Ivan";
	student1.surname = "Ivanov";
	student1.age = 12;
	student1.avg = 10;

	student2.name = "Sashya";
	student2.surname = "dasadas";
	student2.age = 15;
	student2.avg = 5;

	if (student1.avg > student2.avg) {
		cout << student1.name << " " << student1.surname << " is the best student" << endl;
	}
	else {
		cout << student2.name << " " << student2.surname << " is the best student" << endl;
	}
	system("pause");
}

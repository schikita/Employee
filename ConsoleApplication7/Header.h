#pragma once
#pragma warning(suppress : 4996)
#include <iostream>
#include <format>
using namespace std;

struct Employee {
	string surname;
	string departmentName;
	int yearBird;
	int stage;
	string post;
	int salary;
};

void addEmpl(Employee* arr, int& size) {
	cout << "Entered data abaut Employee -> \n";
	for (size_t i = 0; i < size; i++)
	{
		cin.ignore();		
		cout << "Surname -> "; getline(cin, arr[i].surname);
		cout << "Department Name -> "; getline(cin, arr[i].departmentName);
		cout << "Year of Bird -> "; cin >> arr[i].yearBird;
		cout << "Work experience  -> "; cin >> arr[i].stage;
		getchar();
		cout << "Ñurrent position -> "; getline(cin, arr[i].post);
		cout << "Employee salary -> "; cin >> arr[i].salary;
		cout << "\n----------------------------------------\n";
	}
}

void showEmpl(Employee* arr, int& size) {
	cout << endl;
	/*cout << setw(5) << "Surname" << "\t" << "Department Name" << \
		"\t" << "Year of Bird" << "\t" << "Work experience" << "\t" \
		<< "Ñurrent position" << "\t" << "Employee salary" << endl;*/
	for (size_t i = 0; i < size; i++)
	{
		cout << setw(5) << arr[i].surname << "\t" << \
			arr[i].departmentName << arr[i].yearBird << " " << \
			arr[i].stage << "\t" << arr[i].post << "\t" << \
			arr[i].salary << endl;
	}
}

void sortListEmpl(Employee* arr, int& size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j].surname[0] > arr[j + 1].surname[0])
			{
				Employee temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int timing_() {
	time_t current_time;

	current_time = time(NULL);
	int a;
	a = 1970 + current_time / 31537970;
	return a;
}

void showRetEmpl(Employee* arr, int& size) {
	int retirementAge; 
	cout << "Entered retirement Age Employed -> "; cin >> retirementAge;

	for (size_t i = 0; i < size; i++)
	{
		if (timing_() - arr[i].yearBird >= retirementAge)
		{
			cout << setw(5) << arr[i].surname << "\t" << \
				 " " << \
				arr[i].stage << "\t" << arr[i].post << "\t" << \
				endl;
		}
	}

}



double provStage(Employee* arr, int& size, string depart) {
	double s_stage = 0;
	
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i].departmentName == depart)
		{
			s_stage += arr[i].stage;
		}
	}

	return s_stage / (double)size;
}






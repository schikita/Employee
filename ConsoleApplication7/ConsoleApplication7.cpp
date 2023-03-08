#define _CTR_SECURE_NO_WARNINGS
#define EXAMPLE_MACRO_NAME
#pragma warning(suppress : 4996)
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <chrono>
#include <format>
#include "Header.h"
#define EXIT_SUCCESS


using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    
    int quantity;
    cout << "Entered quantity Employed -> "; cin >> quantity;
    Employee* arr = new Employee[quantity];

    addEmpl(arr, quantity);
    showEmpl(arr, quantity);
    sortListEmpl(arr, quantity);
    showRetEmpl(arr, quantity);
    

    string dep;
    cout << "Entered name department -> "; getline(cin, dep);
    
    cout << "Average Work experience in department " << dep << " => " << provStage(arr, quantity, dep) << endl;

    system("pause>0");
    delete[]arr;
    return 0;    
}
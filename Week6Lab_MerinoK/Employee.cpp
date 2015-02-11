/* CIS 247C
 * Feburary XX, 2015
 * Kim Merino
 * Lab 6 Week 6
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#ifndef Week6Lab_Merino_Employee_h
#define Week6Lab_Merino_Employee_h
#include "Employee.h"
#include "Benefits.h"
#include "Salaried.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#endif

using namespace std;
Benefits benefit;
Benefits benefit1("PPO", 100, 200);
Employee::Employee()
{
    this -> firstName="not given";
    strncpy(gender, "U", 1);
    this -> dependents=0;
    this -> annualSalary=20000;
    numEmployees++;
} // end of default constructor

int Employee::numEmployees = 0;

Employee::Employee(string first, string last, char gen, int dep, double salary, Benefits benefit1 ){
    firstName = first;
    lastName = last;
    gender[0] = gen;
    dependents = dep;
    annualSalary = salary;
    numEmployees++;
}

//deconstructor
Employee::~Employee(){
    numEmployees--;
}

// Public Access Method Definitions

void Employee::setFirstName(string first){
    
    cout << "Please enter your first name: ";
    getline(cin, firstName);
    
}
string Employee::getFirstName(){
    return this -> firstName;
}

void Employee::setLastName(string last){
    
    cout << "Please enter your last name: ";
    getline(cin, lastName);
}
string Employee::getLastName(){
    
    return this -> lastName;
}
void Employee::setGender(char gen){
    
    cout << "Please enter your gender: ";
    cin >> gender;
}

char Employee::getGender(){
    
    return gender[0];
}

void Employee::setDependents(int dep){
    
    cout << "Please enter your Dependents: ";
    cin >> dependents;
}

void Employee::setDependents(string dep){
    cout << "Please enter your Dependents: ";
    cin >> dependents;
}

int Employee::getDependents(){
    
    return dependents;
}
void Employee::setAnnualSalary(double salary){
    
    cout << "Please enter your Annual Salary: ";
    cin >> annualSalary;
}

void Employee::setAnnualSalary(string salary){
    ostringstream s;
    cout << "Please enter your Annual Salary: ";
    cin >> annualSalary;
}

double Employee::getAnnualSalary(){
    
    return annualSalary;
}
double Employee::calculatePay(){
    
    return annualSalary/52;
    
}

int Employee::getNumEmployees(){
    cout << "\n--- Number of Employee Object(s) Created----\n";
    cout << "Number of Employees: " << numEmployees << "\n";
    cout << "\n";
    
    return 0;
}

void Employee::displayEmployee(){
    cout << "\nEmployee Information\n";
    cout << "-------------------------------------------------\n";
    cout << "Name:\t" << firstName << " " << lastName + "\n";
    cout << "Gender:\t" << gender << "\n";
    cout << "Dependents:\t" << dependents << "\n";
    benefit.displayBenefits();
}
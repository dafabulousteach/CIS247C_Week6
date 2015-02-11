/* CIS 247C
 * Feburary 16, 2015
 * Kim Merino
 * Lab 6 Week 6
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#ifndef __Week6Lab_MerinoK__Employee__
#define __Week6Lab_MerinoK__Employee__

#include<string>
#include<iostream>
#include "Benefits.h"

using namespace std;

class Employee
{
public:
    
    Employee();
    Employee(string first, string last, char gen, int dep, double salary, Benefits benefit1);
    ~Employee();
    
    // public access methods
    double calculatePay();
    void displayEmployee();
    string getFirstName();
    void setFirstName(string first);
    string getLastName();
    void setLastName(string last);
    char getGender();
    void setGender(const char gen);
    int getDependents();
    void setDependents(int dep);
    void setDependents(string);
    void setAnnualSalary(string);
    double getAnnualSalary();
    void setAnnualSalary(double salary);
    static int getNumEmployees();
    Benefits benefit;
    
    // private members
protected:
    string firstName;
    string lastName;
    char gender[1];
    int dependents;
    double annualSalary;
    static int numEmployees;
}; // End of Employee class
#endif /* defined(__Week6Lab_MerinoK__Employee__) */

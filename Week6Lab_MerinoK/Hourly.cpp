/* CIS 247C
 * Feburary XX, 2015
 * Kim Merino
 * Lab 6 Week 6
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#include "Hourly.h"
#include "Employee.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Hourly::Hourly() : MIN_HOURS(0), MAX_HOURS(50), MIN_WAGE(10), MAX_WAGE(75)
{
    
}

Hourly::~Hourly(){}

Hourly::Hourly(double wage, double hours, string category) : MIN_HOURS(0), MAX_HOURS(50), MIN_WAGE(10), MAX_WAGE(75)
{
    
}

Hourly::Hourly(string fname, string lname, char gen, int dep, double _wage, double _hours, Benefits ben, string _category) : MIN_HOURS(0), MAX_HOURS(50), MIN_WAGE(10), MAX_WAGE(75)
{
    firstName = fname;
    lastName = lname;
    gender[0] = gen;
    dependents = dep;
    wage = _wage;
    hours = _hours;
    benefit = ben;
    if ((category == "temp") || (category == "part time") || (category == "full time")){
        category = _category;
    } else {
        cout << "Unknown";
    }
    
}

double Hourly::calculatePay(){
    if (hours > MIN_HOURS && hours <= MAX_HOURS){
        if (wage >= MIN_WAGE && wage <= MAX_WAGE){
            wage = hours * wage;
            
        } else {
            cout << "Invalid wage";
        }
    } else {
        cout << "Invalid range of hours";
    }
    
    return wage;
}

void Hourly::displayEmployee(){
    Employee::displayEmployee();
    cout << "Annual Salary:\t" << setprecision(2) << showpoint << fixed << annualSalary << "\n";
    cout << "Weekly Salary:\t" << calculatePay() << "\n";
    cout << "\n";
    
    cout << "Hourly Employee\n";
    cout << "Category:\t" << category <<"\n";
    cout << "Wage:\t" << wage << "\n";
    cout << "Hours:\t" << hours << "\n";
}

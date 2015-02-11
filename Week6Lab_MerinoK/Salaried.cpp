/* CIS 247C
 * Feburary XX, 2015
 * Kim Merino
 * Lab 6 Week 6
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include "Salaried.h"
#include "Employee.h"
#include <random>

using namespace std;


Salaried::Salaried(): MIN_MANAGEMENT_LEVEL(0), MAX_MANAGEMENT_LEVEL(3), BONUS_PERCENT(.1)
{
    
}
Salaried::~Salaried(){}

Salaried::Salaried(string fname, string lname, char gen, int dep, double sal, Benefits ben, int manLevel) : MIN_MANAGEMENT_LEVEL(0),MAX_MANAGEMENT_LEVEL(3), BONUS_PERCENT(.1)
{
    
}

Salaried::Salaried(double sal, int manLevel) : MIN_MANAGEMENT_LEVEL(0),MAX_MANAGEMENT_LEVEL(3), BONUS_PERCENT(.1)
{
    annualSalary = sal;
    managementLevel = manLevel;
}

void Salaried::setManagementLevel(int manLevel) {
    if (manLevel >= MIN_MANAGEMENT_LEVEL && manLevel <= MAX_MANAGEMENT_LEVEL){
        managementLevel = 1;
        managementLevel = manLevel;
    } else {
        manLevel = 2;
        managementLevel = manLevel;
    }
}

double Salaried::calculatePay(){
    int BONUS_PERCENT = annualSalary * (managementLevel * .1);
    return BONUS_PERCENT;
    
}


void Salaried::displayEmployee(){
    Employee::displayEmployee();
    cout << "Annual Salary:\t" << setprecision(2) << showpoint << fixed << annualSalary << "\n";
    cout << "Weekly Salary:\t" << calculatePay() << "\n";
    cout << "\n";
    
    //**** Need to add annual and weekly salary with bonus added to it
    cout << "\nSalaried Employee\n";
    cout << "Management Level:\t" << managementLevel << "\n";
}

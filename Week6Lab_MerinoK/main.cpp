/* CIS 247C
 * Feburary XX, 2015
 * Kim Merino
 * Lab 6 Week 6
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */
#ifndef Week6Lab_Merino_Benefits_h
#define Week6Lab_Merino_Benefits_h
#include "Benefits.h"
#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"
#include <iostream>
#include <string>
#endif

using namespace std;

int main(int argc, char *argv[]) {
    Benefits benefit2("PPO", 5, 17);
    Employee e1;
    Salaried s1(50000, 3);
    
    
    cout << "Welcome to your first Object-Oriented Program\nEmployee Class 247C, Week 6 Lab\n";
    cout << "Name: Kim Merino\n";
    
    // Employee #1 User Input
    e1.setFirstName(" ");
    e1.setLastName(" ");
    e1.setGender(0);
    e1.setDependents(" ");
    e1.setAnnualSalary(" ");
    e1.benefit.setHealthInsurance(" ");
    e1.benefit.setLifeInsurance(0);
    e1.benefit.setVacation(0);
    
    e1.displayEmployee();
    
    
    // Salaried Employee
    
    s1.setFirstName("   ");
    s1.setLastName(" ");
    s1.setGender(' ');
    s1.setDependents(" ");
    s1.benefit.setHealthInsurance(" ");
    s1.benefit.setLifeInsurance(' ');
    s1.benefit.setVacation(' ');
    s1.calculatePay();
    s1.displayEmployee();
    
    // Hourly Object
    Hourly h1("James", "Bond", 'M', 0, 40, 50, benefit2, "part-time");
    h1.displayEmployee();
    
    Employee::getNumEmployees();
    cout << "The end of the CIS 247C Week 6 iLab\n";
    
} // end of main


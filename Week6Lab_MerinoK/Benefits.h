/* CIS 247C
 * Feburary XX, 2015
 * Kim Merino
 * Lab 6 Week 6
 * Employee Main Program
 * Program Description: This program accepts input from an employee and displays the informtion entered.
 */

#ifndef __Week6Lab_MerinoK__Benefits__
#define __Week6Lab_MerinoK__Benefits__

#include<string>
#include<iostream>
#include<stdio.h>

using namespace std;

class Benefits
{
public:
    Benefits();
    Benefits(string health, double life, int vac);
    ~Benefits();
    
    // public access methods
    void displayBenefits();
    string getHealthInsurance();
    void setHealthInsurance(string hins);
    double getLifeInsurance();
    void setLifeInsurance(double lifeIns);
    int getVacation();
    void setVacation(int vaca);
    
    // private members
private:
    string healthinsurance;
    double lifeinsurance;
    int vacation;
};

#endif /* defined(__Week6Lab_MerinoK__Benefits__) */

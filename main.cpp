/*
Title: Resistor Program
Filename: main.cpp
Programmer: Abraham Tinajero
For Instructor: Dr. Ed Polak
Date Created: November 05, 2018
Date Due: November 16, 2018

Revised Date: December, 2018

Complete with minor issues with exiting loop first
*/

#include <cstdlib>//needed for system() functions to clear and pause screen in windows
#include <iostream> //needed for cout, cin, endl methods

using namespace std;// reduce typing of std::cout, std::cin, std::endl
#include "resistance.h" //directive to include user defined library
//begin main function
int main(int argc, char *argv[])
{
Resistance myTable;//declare object variable of type class Resistance
while(myTable.getBandNumber()){
myTable.getNumberOfBands();//call getNumberOfBands method of variable object
if(myTable.getBandNumber() == 0){
cout << "Exiting Ressistor Program\n";
system("pause");
return EXIT_SUCCESS; 
}
if(myTable.getNumericOrColor())//call getNumericOrColor method of variable object if 0 skip
if(myTable.getBandNumber() == 6)//call getBandNumber method and evaluate if true
{
myTable.getNumeric();
myTable.getTolerance();
myTable.getTemperature();
myTable.setToleranceColors();
myTable.storeBandValue();
myTable.displayResistor();
myTable.displayBandColors();
}
else//do 5 band resistor
{
myTable.getNumeric();
myTable.getTolerance();
myTable.setToleranceColors();
myTable.storeBandValue();
myTable.displayResistor();
myTable.displayBandColors();
}
else//do 4 band resistor
{
myTable.getBandColors();
myTable.storeBandValue();
myTable.calcResistorValue();
myTable.displayResistor();
}
system("PAUSE");//pause console system output
}//end of while loop
system("PAUSE");//pause console system output
return EXIT_SUCCESS;//end program successfully
}//end of main function

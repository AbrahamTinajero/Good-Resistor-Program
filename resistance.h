/*
Title: Resistor Program
Filename: resistance.cpp
Date: November 05, 2018

Revised Date: December 9, 2018

Complete Color and Numeric functioning code

Menu system still incomplete.
*/

#include "resistance.h"

resistance::resistance()//constructor - create a new object of resistance class
{
bandNumber = 0;//initialize variable
for(int i = 0; i < 4; i++)
bands[i] = 0;//initialize array
}
resistance::~resistance() //destructor - destroy the the object
{
//empty on purpose
}
void resistance::getNumberOfBands() //begin getNumberOfBands function method
{ //begin do-while loop
do{
system("cls");//Windows system clear screen method
cout << "Resistor Color Code Conversion Program\n\n";
cout << "Enter Number of Resistor Bands [4, 5 or 6]: ";//prompt for input
cin >> bandNumber;//store keyboard input into private variable
cin.ignore(1);//ignore enter key character
switch(bandNumber)
{
case 4: return; break; //return to main function
case 5: return; break; //return to main function
case 6: return; break; //return to main function
}
}while(true);// end of infinite do-while loop
}//end of getNumberOfBands function method

bool resistance::getNumericOrColor() //begin getNumericOrColor function method
{
cout << "\nEnter [0] for Color Bands or [1] for Resistor Numeric Values: ";//prompt for input
cin >> numericOrColor; //store keyboard input of numericOrColor variable
cin.ignore(1); // ignore carriage return line feed character
return numericOrColor; //return the keyboard input value
}// end of getNumericOrColor function method
int resistance::getBandNumber() //begin getBandNumber function method
{
return bandNumber; //return value stored in bandNumber private variable
}//end of getBandNumber function method
void resistance::getNumeric() //begin getNumeric function method
{
cout << "\nEnter the Resistor Numeric Value [22000]: ";//prompt for input
getline(cin, buff);
}//end of getNumeric function method
void resistance::getTolerance()//begin getTolerance function method
{
cout << "\n Valid Tolerance % Values are: \n"
<< " 0.05\t0.10\t0.25\t0.50\t1.0\n 2.0\t5.0\t10.0\t20.0\n"
<< "\nEnter the Resistor Tolerance Value: ";//prompt for input
cin >> band5;//store keyboard input in private band5 variable
cin.ignore(1);// ignore carriage return line feed character
}//end of getTolerance function method
void resistance::getTemperature()//begin getTemperature function method
{
cout << "\nValid Temperature ppm/"<< (unsigned char)248 << "C Values are: \n"
<< " 250\t100\t50\t25\n 15\t\t10\t5\t1\n"
<< "\nEnter the Resistor Numeric Temperature Value: ";//prompt for input
cin >> band6;//store keyboard input in private band6 variable
cin.ignore(1);// ignore carriage return line feed character
}//end of getTemperature function method
void resistance::setToleranceColors()//begin setToleranceColors function method
{ //test private band5 value with each if statement and set to appropriate string value
if(band5 == 0.05)
strcpy(cBands[4],"Gray");
if(band5 == 0.10)
strcpy(cBands[4],"Violet");
if(band5 == 0.25)
strcpy(cBands[4],"Blue");
if(band5 == 0.5)
strcpy(cBands[4],"Green");
if(band5 == 1.0)
strcpy(cBands[4],"Brown");
if(band5 == 2.0)
strcpy(cBands[4],"Red");
if(band5 == 5.0)
strcpy(cBands[4],"Gold");
if(band5 == 10.0)
strcpy(cBands[4],"Silver");
if(band5 == 20.0)
strcpy(cBands[4],"None");
}//end of setToleranceColors function method
void resistance::getBandColors()//begin getBandColors function method
{
for(int idx = 0; idx < bandNumber; idx++)
{
cout << "Enter Band " << idx+1 << " Color: ";//prompt for input
cin.getline(cBands[idx],7,'\n');//store keyboard input in private cBands array
}//end of for loop
}//end of getBandColors function method
void resistance::displayBandColors()// begin displayBandColors function method
{
for(int idx = 0; idx < bandNumber; idx++)
cout << "Band " << idx+1 << " Color: " << cBands[idx] << endl;//display values in private cBands array
}//end of displayBandColors
void resistance::storeBandValue()// begin storeBandValue function method
{
for(int idx = 0; idx < bandNumber; idx++)//begin for loop
{
if(bandNumber == 4)//test bandNumber
{
switch(idx)//switch on idx value for 4 band resistor
{
case 0:
storeBand1();//call function method
break;
case 1:
storeBand2();//call function method
break;
case 2:
storeBand3();//call function method
break;
case 3:
storeBand4();//call function method
break;
}//end of switch
}//end of if
else// store 5 and 6 band resistor values
{
switch(idx)
{
case 0:
storeBand1();//call function method
break;
case 1:
storeBand2();//call function method
break;
case 2:
storeBand3();//call function method
break;
case 3:
storeBand4();//call function method
break;
case 4:
storeBand5();//call function method
break;
case 5:
storeBand6();//call function method
break;
}//end of switch
}//end of else
}// for loop
}//end storeBandValue function method

void resistance::storeBand1()//begin storeBand1 function method
{
if(numericOrColor)//test private numericOrColor value if 0 skip else if 1 goto next if statement
{//if above is 1 i.e., true then run if statement below
if(buff.at(0) == '0'){
strcpy(cBands[0], "Black");
bands[0] = 0;
}
else if(buff.at(0) == '1'){
strcpy(cBands[0], "Brown");
bands[0] = 1;
}
else if(buff.at(0) == '2'){
strcpy(cBands[0], "Red");
bands[0] = 2;
}
else if(buff.at(0) == '3'){
strcpy(cBands[0], "Orange");
bands[0] = 3;
}
else if(buff.at(0) == '4'){
strcpy(cBands[0], "Yellow");
bands[0] = 4;
}
else if(buff.at(0) == '5'){
strcpy(cBands[0], "Green");
bands[0] = 5;
}
else if(buff.at(0) == '6'){
strcpy(cBands[0], "Blue");
bands[0] = 6;
}
else if(buff.at(0) == '7'){
strcpy(cBands[0], "Violet");
bands[0] = 7;
}
else if(buff.at(0) == '8'){
strcpy(cBands[0], "Gray");
bands[0] = 8;
}
else if(buff.at(0) == '9'){
strcpy(cBands[0], "White");
bands[0] = 9;
}
}
else
{
if(strcmp(cBands[0], "Black") == 0)
bands[0] = 0;
else if(strcmp(cBands[0], "Brown") == 0)
bands[0] = 1;
else if(strcmp(cBands[0], "Red") == 0)
bands[0] = 2;
else if(strcmp(cBands[0], "Orange") == 0)
bands[0] = 3;
else if(strcmp(cBands[0], "Yellow") == 0)
bands[0] = 4;
else if(strcmp(cBands[0], "Green") == 0)
bands[0] = 5;
else if(strcmp(cBands[0], "Blue") == 0)
bands[0] = 6;
else if(strcmp(cBands[0], "Violet") == 0)
bands[0] = 7;
else if(strcmp(cBands[0], "Gray") == 0)
bands[0] = 8;
else if(strcmp(cBands[0], "White") == 0)
bands[0] = 9;
}
}//end of storeBand1 function method
void resistance::storeBand2()//begin storeBand2 function method
{
if(numericOrColor)
{
if(buff.at(1) == '0'){
strcpy(cBands[1], "Black");
bands[1] = 0;
}
else if(buff.at(1) == '1'){
strcpy(cBands[1], "Brown");
bands[1] = 1;
}
else if(buff.at(1) == '2'){
strcpy(cBands[1], "Red");
bands[1] = 2;
}
else if(buff.at(1) == '3'){
strcpy(cBands[1], "Orange");
bands[1] = 3;
}
else if(buff.at(1) == '4'){
strcpy(cBands[1], "Yellow");
bands[1] = 4;
}
else if(buff.at(1) == '5'){
strcpy(cBands[1], "Green");
bands[1] = 5;
}
else if(buff.at(1) == '6'){
strcpy(cBands[1], "Blue");
bands[1] = 6;
}
else if(buff.at(1) == '7'){
strcpy(cBands[1], "Violet");
bands[1] = 7;
}
else if(buff.at(1) == '8'){
strcpy(cBands[1], "Gray");
bands[1] = 8;
}
else if(buff.at(1) == '9'){
strcpy(cBands[1], "White");
bands[1] = 9;
}
}
else
{
if(strcmp(cBands[1], "Black") == 0)
bands[1] = 0;
else if(strcmp(cBands[1], "Brown") == 0)
bands[1] = 1;
else if(strcmp(cBands[1], "Red") == 0)
bands[1] = 2;
else if(strcmp(cBands[1], "Orange") == 0)
bands[1] = 3;
else if(strcmp(cBands[1], "Yellow") == 0)
bands[1] = 4;
else if(strcmp(cBands[1], "Green") == 0)
bands[1] = 5;
else if(strcmp(cBands[1], "Blue") == 0)
bands[1] = 6;
else if(strcmp(cBands[1], "Violet") == 0)
bands[1] = 7;
else if(strcmp(cBands[1], "Gray") == 0)
bands[1] = 8;
else if(strcmp(cBands[1], "White") == 0)
bands[1] = 9;
}
}//end of storeBand2 function method
void resistance::storeBand3()//begin storeBand3 function method
{
if(numericOrColor)
{
if(buff.at(2) == '0')
strcpy(cBands[2], "Black");
else if(buff.at(2) == '1')
strcpy(cBands[2], "Brown");
else if(buff.at(2) == '2')
strcpy(cBands[2], "Red");
else if(buff.at(2) == '3')
strcpy(cBands[2], "Orange");
else if(buff.at(2) == '4')
strcpy(cBands[2], "Yellow");
else if(buff.at(2) == '5')
strcpy(cBands[2], "Green");
else if(buff.at(2) == '6')
strcpy(cBands[2], "Blue");
else if(buff.at(2) == '7')
strcpy(cBands[2], "Violet");
else if(buff.at(2) == '8')
strcpy(cBands[2], "Gray");
else if(buff.at(2) == '9')
strcpy(cBands[2], "White");
}
else
{
if(strcmp(cBands[2], "Black") == 0)
bands[2] = 0;
else if(strcmp(cBands[2], "Brown") == 0)
bands[2] = 1;
else if(strcmp(cBands[2], "Red") == 0)
bands[2] = 2;
else if(strcmp(cBands[2], "Orange") == 0)
bands[2] = 3;
else if(strcmp(cBands[2], "Yellow") == 0)
bands[2] = 4;
else if(strcmp(cBands[2], "Green") == 0)
bands[2] = 5;
else if(strcmp(cBands[2], "Blue") == 0)
bands[2] = 6;
else if(strcmp(cBands[2], "Violet") == 0)
bands[2] = 7;
else if(strcmp(cBands[2], "Gray") == 0)
bands[2] = 8;
else if(strcmp(cBands[2], "White") == 0)
bands[2] = 9;
}
}//end of storeBand3 function method
void resistance::storeBand4()//begin storeBand4 function method
{
for(int idx2 = 3; idx2 < buff.length(); idx2++){
if(buff.at(idx2)== '0'){
// cout << "buff = " << buff.at(idx2) << endl;
bands[3] = bands[3] + 1;
}
}

if(numericOrColor)
{
if(bands[3] == 0)
strcpy(cBands[3], "Black");
else if(bands[3] == 1)
strcpy(cBands[3], "Brown");
else if(bands[3] == 2)
strcpy(cBands[3], "Red");
else if(bands[3] == 3)
strcpy(cBands[3], "Orange");
else if(bands[3] == 4)
strcpy(cBands[3], "Yellow");
else if(bands[3] == 5)
strcpy(cBands[3], "Green");
else if(bands[3] == 6)
strcpy(cBands[3], "Blue");
else if(bands[3] == 7)
strcpy(cBands[3], "Violet");
else if(bands[3] == 8)
strcpy(cBands[3], "Gray");
else if(bands[3] == 9)
strcpy(cBands[3], "White");
}
else
{
if(strcmp(cBands[3], "Black") == 0)
bands[3] = Black;
else if(strcmp(cBands[3], "Brown") == 0)
bands[3] = Brown;
else if(strcmp(cBands[3], "Red") == 0)
bands[3] = Red;
else if(strcmp(cBands[3], "Orange") == 0)
bands[3] = Orange;
else if(strcmp(cBands[3], "Yellow") == 0)
bands[3] = Yellow;
else if(strcmp(cBands[3], "Green") == 0)
bands[3] = Green;
else if(strcmp(cBands[3], "Blue") == 0)
bands[3] = Blue;
else if(strcmp(cBands[3], "Violet") == 0)
bands[3] = Violet;
else if(strcmp(cBands[3], "Gray") == 0)
bands[3] = Gray;
else if(strcmp(cBands[3], "White") == 0)
bands[3] = White;
else if(strcmp(cBands[3], "Gold") == 0)
bands[3] = Gold;
else if(strcmp(cBands[3], "Silver") == 0)
bands[3] = Silver;
}
}//end of storeBand4 function method
void resistance::storeBand5()//begin storeBand5 function method
{
if(numericOrColor)
{
if(band5 == 1.0)
strcpy(cBands[4], "Brown");
else if(band5 == 2.0)
strcpy(cBands[4], "Red");
else if(band5 == 0.5)
strcpy(cBands[4], "Green");
else if(band5 == 0.25)
strcpy(cBands[4], "Blue");
else if(band5 == 0.1)
strcpy(cBands[4], "Violet");
else if(band5 == 5.0)
strcpy(cBands[4], "Gold");
else if(band5 == 10.0)
strcpy(cBands[4], "Silver");
else if(band5 == 20.0)
strcpy(cBands[4], "None");
}
else
{
if(strcmp(cBands[4], "Brown") == 0)
band5 = 0.01;
else if(strcmp(cBands[4], "Red") == 0)
band5 = 0.02;
else if(strcmp(cBands[4], "Green") == 0)
band5 = 0.0050;
else if(strcmp(cBands[4], "Blue") == 0)
band5 = 0.0025;
else if(strcmp(cBands[4], "Violet") == 0)
band5 = 0.0010;
else if(strcmp(cBands[4], "Gold") == 0)
band5 = 0.05;
else if(strcmp(cBands[4], "Silver") == 0)
band5 = .10;
else if(strcmp(cBands[4], "None") == 0)
band5 = 0.20;
}
}//end of storeBand5 function method
void resistance::storeBand6()//begin storeBand6 function method
{
if(numericOrColor)
{
if(band6 == 250)
strcpy(cBands[5], "Black");
else if(band6 == 100)
strcpy(cBands[5], "Brown");
else if(band6 == 50)
strcpy(cBands[5], "Red");
else if(band6 == 15)
strcpy(cBands[5], "Orange");
else if(band6 == 25)
strcpy(cBands[5], "Yellow");
else if(band6 == 10)
strcpy(cBands[5], "Blue");
else if(band6 == 5)
strcpy(cBands[5], "Violet");
else if(band6 == 1)
strcpy(cBands[5], "White");
}
else
{
if(strcmp(cBands[5], "Black") == 0)
band6 = 250;
else if(strcmp(cBands[5], "Brown") == 0)
band6 = 100;
else if(strcmp(cBands[5], "Red") == 0)
band6 = 50;
else if(strcmp(cBands[5], "Orange") == 0)
band6 = 15;
else if(strcmp(cBands[5], "Yellow") == 0)
band6 = 25;
else if(strcmp(cBands[5], "Blue") == 0)
band6 = 10;
else if(strcmp(cBands[5], "Violet") == 0)
band6 = 5;
else if(strcmp(cBands[5], "White") == 0)
band6 = 1;
}
}//end of storeBand6 function method

void resistance::storeBand1()//begin storeBand1 function method
{
if(numericOrColor)//test private numericOrColor value if 0 skip else if 1 goto next if statement
{//if above is 1 i.e., true then run if statement below
if(buff.at(0) == '0'){
strcpy(cBands[0], "Black");
bands[0] = 0;
}
else if(buff.at(0) == '1'){
strcpy(cBands[0], "Brown");
bands[0] = 1;
}
else if(buff.at(0) == '2'){
strcpy(cBands[0], "Red");
bands[0] = 2;
}
else if(buff.at(0) == '3'){
strcpy(cBands[0], "Orange");
bands[0] = 3;
}
else if(buff.at(0) == '4'){
strcpy(cBands[0], "Yellow");
bands[0] = 4;
}
else if(buff.at(0) == '5'){
strcpy(cBands[0], "Green");
bands[0] = 5;
}
else if(buff.at(0) == '6'){
strcpy(cBands[0], "Blue");
bands[0] = 6;
}
else if(buff.at(0) == '7'){
strcpy(cBands[0], "Violet");
bands[0] = 7;
}
else if(buff.at(0) == '8'){
strcpy(cBands[0], "Gray");
bands[0] = 8;
}
else if(buff.at(0) == '9'){
strcpy(cBands[0], "White");
bands[0] = 9;
}
}
else
{
if(strcmp(cBands[0], "Black") == 0)
bands[0] = 0;
else if(strcmp(cBands[0], "Brown") == 0)
bands[0] = 1;
else if(strcmp(cBands[0], "Red") == 0)
bands[0] = 2;
else if(strcmp(cBands[0], "Orange") == 0)
bands[0] = 3;
else if(strcmp(cBands[0], "Yellow") == 0)
bands[0] = 4;
else if(strcmp(cBands[0], "Green") == 0)
bands[0] = 5;
else if(strcmp(cBands[0], "Blue") == 0)
bands[0] = 6;
else if(strcmp(cBands[0], "Violet") == 0)
bands[0] = 7;
else if(strcmp(cBands[0], "Gray") == 0)
bands[0] = 8;
else if(strcmp(cBands[0], "White") == 0)
bands[0] = 9;
}
}//end of store4Band1 function method

void resistance::storeBand2()//begin storeBand2 function method
{
if(numericOrColor)
{
if(buff.at(1) == '0'){
strcpy(cBands[1], "Black");
bands[1] = 0;
}
else if(buff.at(1) == '1'){
strcpy(cBands[1], "Brown");
bands[1] = 1;
}
else if(buff.at(1) == '2'){
strcpy(cBands[1], "Red");
bands[1] = 2;
}
else if(buff.at(1) == '3'){
strcpy(cBands[1], "Orange");
bands[1] = 3;
}
else if(buff.at(1) == '4'){
strcpy(cBands[1], "Yellow");
bands[1] = 4;
}
else if(buff.at(1) == '5'){
strcpy(cBands[1], "Green");
bands[1] = 5;
}
else if(buff.at(1) == '6'){
strcpy(cBands[1], "Blue");
bands[1] = 6;
}
else if(buff.at(1) == '7'){
strcpy(cBands[1], "Violet");
bands[1] = 7;
}
else if(buff.at(1) == '8'){
strcpy(cBands[1], "Gray");
bands[1] = 8;
}
else if(buff.at(1) == '9'){
strcpy(cBands[1], "White");
bands[1] = 9;
}
}
else
{
if(strcmp(cBands[1], "Black") == 0)
bands[1] = 0;
else if(strcmp(cBands[1], "Brown") == 0)
bands[1] = 1;
else if(strcmp(cBands[1], "Red") == 0)
bands[1] = 2;
else if(strcmp(cBands[1], "Orange") == 0)
bands[1] = 3;
else if(strcmp(cBands[1], "Yellow") == 0)
bands[1] = 4;
else if(strcmp(cBands[1], "Green") == 0)
bands[1] = 5;
else if(strcmp(cBands[1], "Blue") == 0)
bands[1] = 6;
else if(strcmp(cBands[1], "Violet") == 0)
bands[1] = 7;
else if(strcmp(cBands[1], "Gray") == 0)
bands[1] = 8;
else if(strcmp(cBands[1], "White") == 0)
bands[1] = 9;
}
}//end of store4Band2 function method

void resistance::storeBand3()//begin store4Band3 function method
{
for(int idx2 = 2; idx2 < buff.length(); idx2++){
if(buff.at(idx2)== '0'){
// cout << "buff = " << buff.at(idx2) << endl;
bands[3] = bands[3] + 1;
}
}
if(numericOrColor)
{
if(bands[3] == 0)
strcpy(cBands[2], "Black");
else if(bands[3] == 1)
strcpy(cBands[2], "Brown");
else if(bands[3] == 2)
strcpy(cBands[2], "Red");
else if(bands[3] == 3)
strcpy(cBands[2], "Orange");
else if(bands[3] == 4)
strcpy(cBands[2], "Yellow");
else if(bands[3] == 5)
strcpy(cBands[2], "Green");
else if(bands[3] == 6)
strcpy(cBands[2], "Blue");
else if(bands[3] == 7)
strcpy(cBands[2], "Violet");
else if(bands[3] == 8)
strcpy(cBands[2], "Gray");
else if(bands[3] == 9)
strcpy(cBands[2], "White");
}
else
{
if(strcmp(cBands[2], "Black") == 0)
bands[3] = Black;
else if(strcmp(cBands[2], "Brown") == 0)
bands[3] = Brown;
else if(strcmp(cBands[2], "Red") == 0)
bands[3] = Red;
else if(strcmp(cBands[2], "Orange") == 0)
bands[3] = Orange;
else if(strcmp(cBands[2], "Yellow") == 0)
bands[3] = Yellow;
else if(strcmp(cBands[2], "Green") == 0)
bands[3] = Green;
else if(strcmp(cBands[2], "Blue") == 0)
bands[3] = Blue;
else if(strcmp(cBands[2], "Violet") == 0)
bands[3] = Violet;
else if(strcmp(cBands[2], "Gray") == 0)
bands[3] = Gray;
else if(strcmp(cBands[2], "White") == 0)
bands[3] = White;
else if(strcmp(cBands[2], "Gold") == 0)
bands[3] = Gold;
else if(strcmp(cBands[2], "Silver") == 0)
bands[3] = Silver;
}
}//end of store4Band3 function method
void resistance::storeBand4()//begin store4Band4 function method
{ if(numericOrColor)
{
if(band5 == 1.0)
strcpy(cBands[3], "Brown");
else if(band5 == 2.0)
strcpy(cBands[3], "Red");
else if(band5 == 0.5)
strcpy(cBands[3], "Green");
else if(band5 == 0.25)
strcpy(cBands[3], "Blue");
else if(band5 == 0.1)
strcpy(cBands[3], "Violet");
else if(band5 == 5.0)
strcpy(cBands[3], "Gold");
else if(band5 == 10.0)
strcpy(cBands[3], "Silver");
else if(band5 == 20.0)
strcpy(cBands[3], "None");
}
else
{
if(strcmp(cBands[3], "Brown") == 0)
band5 = 0.01;
else if(strcmp(cBands[3], "Red") == 0)
band5 = 0.02;
else if(strcmp(cBands[3], "Green") == 0)
band5 = 0.0050;
else if(strcmp(cBands[3], "Blue") == 0)
band5 = 0.0025;
else if(strcmp(cBands[3], "Violet") == 0)
band5 = 0.0010;
else if(strcmp(cBands[3], "Gold") == 0)
band5 = 0.05;
else if(strcmp(cBands[3], "Silver") == 0)
band5 = .10;
else if(strcmp(cBands[3], "None") == 0)
band5 = 0.20;
}
}//end of store4Band4 function method

void resistance::calcResistorValue()//begin calcResistorValue function method
{
if(bandNumber == 4)
resistorValue = ((bands[0]*10 + bands[1]) * (pow(10.0,bands[3])));//4 band resistor calculation
else
resistorValue = (((bands[0]*100) + (bands[1]*10) + bands[2]) * (pow(10.0,bands[3])));//5 and 6 band resistor calculation
}//end of calcResistorValue function method
void resistance::displayResistor()//begin displayResistor function method
{
if(bandNumber == 4)
{
if(numericOrColor)
{
cout << "\nThe Resistor colors are "
<< cBands[0] << " "
<< cBands[1] << " "
<< cBands[2] << " "
<< cBands[3] << " " << endl
<< "The Resistor value is " << buff
<< " " << (unsigned char)234 << endl;
cout << cBands[3] << " Tolerance is " << fixed << showpoint << setprecision(1)
<< band5 << "%" << endl;
}
else
{
cout << "\nThe Resistor colors are "
<< cBands[0] << " "
<< cBands[1] << " "
<< cBands[2] << " "
<< cBands[3] << " " << endl
<< "The Resistor value is " << resistorValue
<< " " << (unsigned char)234 << endl;
cout << cBands[3] << " Tolerance is " << fixed << showpoint << setprecision(1)
<< (band5*100) << "%" << endl;
}
}
else if(bandNumber == 5)
{
if(numericOrColor)
{
cout << "\nThe Resistor colors are "
<< cBands[0] << " "
<< cBands[1] << " "
<< cBands[2] << " "
<< cBands[3] << " "
<< cBands[4] << endl
<< "The Resistor value is " << buff
<< " " << (unsigned char)234 << endl;
cout << cBands[4] << " Tolerance is " << fixed << showpoint << setprecision(1)
<< band5 << "%" << endl;
}
else
{
cout << "\nThe Resistor colors are "
<< cBands[0] << " "
<< cBands[1] << " "
<< cBands[2] << " "
<< cBands[3] << " "
<< cBands[4] << endl
<< "The Resistor value is " << resistorValue
<< " " << (unsigned char)234 << endl;
cout << cBands[4] << " Tolerance is " << fixed << showpoint << setprecision(1)
<< (band5*100) << "%" << endl;
}
}
else
{
if(numericOrColor)
{
cout << "\nThe Resistor colors are "
<< cBands[0] << " "
<< cBands[1] << " "
<< cBands[2] << " "
<< cBands[3] << " "
<< cBands[4] << endl
<< "The Resistor value is " << buff
<< " " << (unsigned char)234 << endl;
cout << cBands[4] << " Tolerance is " << fixed << showpoint << setprecision(1)
<< band5 << "%" << endl;
cout << "Temperature is " << band6 << "ppm/" << (unsigned char)248 << "C" << endl;
}
else
{
cout << "\nThe Resistor colors are "
<< cBands[0] << " "
<< cBands[1] << " "
<< cBands[2] << " "
<< cBands[3] << " "
<< cBands[4] << endl
<< "The Resistor value is " << resistorValue
<< (unsigned char)234 << endl;
cout << cBands[4] << " Tolerance is " << fixed << showpoint << setprecision(1)
<< (band5*100) << "%" << endl;
cout << "Temperature is " << band6 << "ppm/" << (unsigned char)248 << "C" << endl;
}
}
}//end of displayResistor function method
/*
Title: Resistor Program
Filename: resistance.h
Date: November 05, 2018
*/

#ifndef RESISTANCE_H
#define RESISTANCE_H
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <string>




using namespace std;

//enumeration to define the power of ten multiple.

enum COLOR {Silver = -2, Gold = -1, Black = 0, 
Brown, Red, Orange, 
Yellow, Green, Blue, Violet,
Gray, White, None};

class resistance
{  //the default status of a class is private hidden from the end user
int bands[4];
float band5;
int band6;
char cBands[13][7]; //array to hold color values
int bandNumber; //number of resistor bands selector
float resistorValue; //resistor value as a real number
bool numericOrColor; // enter as numeric value or color value selector
char buffer[14]; // character array buffer to manipulate character string values
// public access to the private variables.
public:
resistance();//constructor
~resistance(); //destructor
void getNumberOfBands();//get number of resistor bands function method
bool getNumericOrColor();//get numeric or color values from the keyboard input function method
int getBandNumber(); //get band number function method
void getNumeric(); //get numeric value function method
void getTolerance(); //get resistor tolerance value function method
void getTemperature(); //get resistor temperature value function method
void setToleranceColors(); // set tolerance color value function method
void getBandColors(); //get resistor band colors function method
void displayBandColors(); //display resistor band colors function method
void storeBandValue(); //store resistor band value function method
void storeBand1(); // store resistor band 1 value function method
void storeBand2(); // store resistor band 2 value function method
void storeBand3(); // store resistor band 3 value function method 
void storeBand4(); // store resistor band 4 value function method
void storeBand5(); // store resistor band 5 value function method 
void storeBand6(); // store resistor band 6 value function method
void storeBand3(); // store 4 band resistor band 3 value function method 
void storeBand4(); // store 4 band resistor band 4 value function method
void calcResistorValue(); // calculate resistor value function method
void displayResistor(); // display resistor value function method
}; //end of Resistance class declaration
#endif

//end of class and resistance.h declaration library file

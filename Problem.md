# Lab 03 - Task # 2:  Writing Problems in Pseudocode and Using Branch, Commit and Pull Request. 

## Problem 1: Display Student Information Using Different Data Types
```
## DECLARATION
DECLARE Student_ID :  INTEGER  
DECLARE Student_Name : STRING  
DECLARE Student_GPA : REAL  

## ASSIGNING VALUES 
Student_ID = 1032  
Student_Name = Sahal Ahmed  
Student_GPA = 3.62  

## PRINTING THE STATEMENTS 
PRINT "Student ID: ", Student_ID  
PRINT "Name: ", Student_Name  
PRINT "GPA: ", Student_GPA  

```
## Problem 2: Read and Display a Character Using `getchar()` and `putchar()`  
```
PRINT "Enter a character: "  
READ character USING getchar()

Print "You entered: "  
Write character USING putchar()

```
## Problem 3: Display a floating-point value using different precision settings
```
DEFINE FLOAT pi = 3.1415926535

PRINT "Default value of pi: ", pi  
PRINT "Value of pi upto 3 dp: ", FORMAT(pi,%.3f)  
PRINT "Value of pi upto 5 dp: ", FORMAT(pi,%.5f)  

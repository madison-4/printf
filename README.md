# About
This project is about recoding printf in C
It makes use of K n R's algorithm.
## Return
We all know that printf returns the character count fothe chracters it has printed.
This function does the same so that every chracter it has printed will be counted and returned.
The exception is when a NULL follows the percent i.e. a % is the last character
Like the std printf, it returns -1 which is obviousluy not the car count
## Choice
This file is what checks for the specifier before calling the appropriate function to pint it.
Instead of employing switch case statements as in K n R, it uses an array of structs.
The structs cosist of a function pointer to functions that take a va_list variable and return an int
Th conversion using va)arg is done here and the apprpriate function chosen.
The functions return the character count which is crucial for printf.
## print
This file contains the main printf function
## main.h
This file conatisn teh structs and prototypes for all functions used in the function
## stringlib
It contains the functions to deal with strings
## _putchar
This file contains the definition for the custom _putchar function used.
It borrows from Julien Barbier's original function which can be found when looking at his repo or alx's repo
## numbers
This file contains the functions for int specifiers, it does not have the conversion systems, yet
# Authors
madison-4/nox
DianaWangui/koi
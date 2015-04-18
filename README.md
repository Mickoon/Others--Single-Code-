# Other_Useful_Codes
You can find some useful codes in this repository :)

1. addFunction.c provides a code which allow you to add a massive size of two numbers.
As we know, the maximum integer number is 2,147,483,647, thus, we will face a problem if we get a sum of two numbers is higher than the maximum limit. 

In this code, Digit-by-Digit addition is used, which means we add each number's digit from the end of their numbers (reversely), if sum of the digits is calculated higher than 10, "carry" is occurred, and then 1 is added to next digit calculation and the current sum is reduced by 10. 

This code can manage massive numbers and result their sum, since the sum will be expressed as a string, not a number. 

#include math.h

/*
Author: Joey McNatt
Created 9/10/18
Updated 9/10/18
This program works as a simple integer calculator capable of addition, subtraction, multiplication, division,
modulus, left and right shifts, and bitwise functions AND, OR, XOR, and inversion.
*/

int math(int num1, int num2, char Operator){

switch (Operator){

case '+':{
	return num1 + num2;
}

case '-':{
	return num1 - num2;
}

case '*':{
	return num1 * num2;
}

case '/':{
	return num1 / num2;
}

case '%':{
	return num1 % num2;
}

case '<':{
	return num1 << num2;
}

case '>':{
	return num1 >> num2;
}

case '&':{
	return num1 & num2;
}

case '|':{
	return num1 | num2;
}

case '^':{
	return num1 ^ num2;
}

case '~':{
	return ~num1;
}


default:
return 0;

}

}
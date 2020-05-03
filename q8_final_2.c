#include <stdio.h>

/* Question 8.b
*  Rewrite the C program segment using if and goto statement in C
*  @uthor: Ernest Mujambere
*  Class: Programming Language Concept -> Spring 2020
*/
int main() {

	int j = -3;
	int i;

	for(i = 0; i < 3; i++){

		int k = j + 2;

		if(k == 3){

			// Do nothing
		}

		if(k == 2){

			// Goto case 1
			goto case1;
		}

		if(k == 0){

			// Goto case 2
			goto case2;
		}

		if(j > 0)
			// Do nothing

		j = 3 - i;
	}

	case1:
		// Decrement j
			j--;

	case2:
		// Increment j by 2
			j += 2;
}
	


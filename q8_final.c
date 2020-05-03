#include <stdio.h>

/* Question 8.a
* Rewrite it using no goto & breaks statement
*  @uthor: Ernest Mujambere
*  Class: Programming Language Concept -> Spring 2020
*/
int main() {

	int j = -3;
	int i;

	for(i = 0; i < 3; i++){

		int k = j + 2;

		if(k == 3){
			// Nothing
		}

		if(k == 2){
			// Decrement j
			j--;
		}

		if(k == 0){
			// Increment j by 2
			j += 2;
		}

		if(j > 0)
			// Do nothing

		j = 3 - i;
	}
}
	


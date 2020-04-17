
// Question #3 
// Programming Concept Language

#include<stdio.h>
#include<time.h>

// Function to reference the 2D array through subscripts
void my_func_with_only_subscript() {

	// Assuming that the usage of
	int arr[15][5] = {0}; 

	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 15; i++) {
			arr[i][j];
		}
	}

	return;
}

// Function to reference the 2D array through pointers
void my_func_with_pointers() {

	// Assuming the usage of
	int arr[15][5] = {0};

	for(int j = 0; j < 5; j++) {
		for(int i = 0; i < 15; i++) {
			*(*(arr + i) + j);
		}
	}

	return;
}

int main() {

	// Declaring variables tfor the cpu operations
	clock_t start, end;
	double cpu_time_used;

	// Starting the cpu clock
	start = clock();

	for (int i = 0; i < 10000; i++) {
		my_func_with_only_subscript();
	}

	// Closing the cpu clock
	end = clock();

	// Calculate time elapsed in secs
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

	// Print the time for the subscript with references
	printf("Time taken for subscript with references: %f\n", cpu_time_used);

	// Starting cpu clock
	start = clock();

	for (int i = 0; i < 10000; i++) {
		my_func_with_pointers();
	}

	// Closing the cpu clock
	end = clock();

	// Calculating the time elapsed in array reference through pointers
	cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

	// Print the time for the pointers
	printf("Time taken for pointers:%f\n", cpu_time_used);

	return 0;
}


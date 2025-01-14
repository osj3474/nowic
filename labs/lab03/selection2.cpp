// C++ for C Coders & Data Structures
// Lecture note by idebtor@gmail.com
//
//	selection.cpp - This brute force version of Selection Sort that takes O(n^2).
/*************************************************************
    Lab03 - Understanding a better coding in C/C++
    - NMN(No magic number)
    - DRY(Don't repeat yourself)
    - malloc(), free()
    - assert()
    - rand()
    - mod operator %
    - #if macro
    - Learn about __a better coding__ after all.
***************************************************************/
#include <iostream>
#include <cassert>

void selectionSort(int *list, int n) {
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (list[j] < list[min]) min = j;
		swap(list[i], list[min]);
	}
}

int main(int argc, char *argv[]) {
	// int list[] = { 3, 4, 1, 7, 0, 9, 6, 5, 2, 8};
	// const int N = sizeof(list)/sizeof(list[0]);

  int = 10;
	int *list = new int[N];

	for (int i = 0; i < N; i++) {
		list[i] = rand() % N;
	}

	printf("UNSORTED(%d): \n", N);
  for (int i = 0; i < N; i++)
    printf("%d ", list[i]);
  printf("\n");

	sort(list, N);

	printf("SORTED(%d): \n", N);
  for (int i = 0; i < N; i++)
		printf("%d ", list[i]);
	printf("\n");

  delete[] list;
  printf("Happy Coding~~\n");
}

#include <iostream>
#include "main.hpp"
using namespace std;

void printtriangle(int numbers[][3], int);
int main()
{
	int numbers[SIZE][SIZE] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

	printtriangle(numbers, SIZE);
}
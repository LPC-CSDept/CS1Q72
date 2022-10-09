// Test definitions. Do NOT edit this file!
#define CATCH_CONFIG_MAIN // defines main() automatically
#include <iostream>
#include <fstream>
#include "catch.hpp"
#include "main.hpp"
// tests for exercise 1
TEST_CASE("Ex1 3x3() ", "[example]")
{
	fstream file;
	int num;
	int numbers[SIZE][SIZE] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

	printtriangle(numbers, SIZE);

	file.open("output.txt", ios::in | ios::out);
	if (!file)
	{
		cout << "file open error 2\n";
		exit(0);
	}
	REQUIRE(file);
	file >> num;
	REQUIRE(num == 0);
	file >> num;
	REQUIRE(num == 3);
	file >> num;
	REQUIRE(num == 4);
	file >> num;
	REQUIRE(num == 6);
	file >> num;
	REQUIRE(num == 7);
	file >> num;
	REQUIRE(num == 8);
	file.close();

	// REQUIRE(number[idx] == usernum);
}
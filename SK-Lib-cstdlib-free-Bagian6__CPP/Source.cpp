#pragma warning(disable:4996)

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	char* ptr;
	ptr = (char*)malloc(10 * sizeof(char));

	strcpy(ptr, "Hello C++");
	cout << "Before reallocating: " << ptr << endl;

	ptr = (char*)realloc(ptr, 20);
	strcpy(ptr, "Hello, Welcome to C++");
	cout << "After reallocating: " << ptr << endl;

	free(ptr);
	cout << endl << "Garbage Value: " << ptr;

	_getch();
	return 0;
}
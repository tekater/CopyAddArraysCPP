#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;


int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//system("color B5");
	cout << "Задание 1\n";

	const int length = 10;
	int A[length] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int B[length] = { 0, 1, 0, 1, 0, 11, 10, 10, 10 ,10};
	int* adv_A = A; int* adv_B = B;
	cout << "A: ";
	for (int i = 0; i < length; i++)
	{
		cout << A[i] << " ";
	}
	cout << "\nB: ";
	for (int i = 0; i < length; i++)
	{
		cout << B[i] << " ";
	}
	cout << "\n\nCOPY: ";
	for (int i = 0; i < length; i++)
	{
		adv_B = adv_A;
		cout << *adv_B << " ";
		adv_A++; adv_B++;
	}
	Sleep(3000); system("cls");


	cout << "Задание 2\n";
	int temp = 0;
	int arr[length] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "arr: ";
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < length / 2; i++) {
		temp = *(arr + i);
		*(arr + i) = *(arr + (length - i - 1));
		*(arr + (length - i - 1)) = temp;
	}
	cout << "Rev: ";
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	Sleep(3000); system("cls");


	cout << "Задание 3\n";

	cout << "A: ";
	for (int i = 0; i < length; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

	for (int i = 1; i < length; i++) {
		*(B + (length - i - 1)) = *(A + i);
	}

	cout << "invert_COPY: ";
	for (int i = 0; i < length; i++) {
		cout << B[i] << " ";
	}
}

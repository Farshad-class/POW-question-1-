#include <iostream>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <cstdint>
#include <cinttypes>

#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
using namespace std;


int main()
{
	int a, b;
	cout << "For calculate a^b please enter a :";
	cin >> a;
	cout << " please enter b :";
	cin >> b;

	cout << pow(a, b);

	getch();

}
int pow(int a, int b)
{
	int pow = 1;
	for (int i = 1; i <= b;i++)
	{
		pow *= a;
	}

	return pow;
}
#include <string>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a = 150;
	float b = 15.933;
	unsigned short c = 250;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	const int day = 24;
	const string month = "Января";
	const int year = 2003;

	cout << "Моя дата рождения: " << day << " " << month << " " << year << " года"  << endl;

	const float d = 2.3;
	const string windows = "WINDOWS";

	cout << d << " " << windows << endl;

	return 0;
}

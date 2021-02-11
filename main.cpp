

#include "stdio.h"
#include <iostream>
#include <climits>
#include <float.h>

using namespace std;

int main() {

	cout << "Hello World." << endl;

	cout << SHRT_MAX << endl;
	cout << INT_MAX << endl;
	cout << LONG_MAX << endl;
	cout << LLONG_MAX << endl;
	cout << "bits per byte:" << CHAR_BIT << endl;

	cout << sizeof(int) << endl;

	cout << "\u00F6" << endl;

	// wchar_t 代表的整數大小，視編譯器而定
	// e.g.
	// g++ 為 4 byte
	// win 10 為 unsigned short 為 2 byte
	// 要使用 wide character type 須在字元常數或字串前間加上 L 
	cout << sizeof(wchar_t) << endl;
	wchar_t a = L'a';
	wcout << a << endl;

	cout << sizeof(char16_t) << endl;
	cout << sizeof(char32_t) << endl;

	cout.setf(ios_base::fixed, ios_base::floatfield);


	cout << FLT_DIG << endl;
	cout << DBL_DIG << endl;

	const float milion = 1.0e11;
	float f = 10.0 / 3.0;
	double d = 10.0 / 3.0;
	cout << f  << endl;
	cout << f * milion << endl;
	cout << d  << endl;
	cout << d * milion << endl;

}
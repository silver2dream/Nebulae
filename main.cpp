

#include <iostream>

#include "user.h"
#include "utility.h"

using namespace std;

int main() {

	cout << "Hello World." << endl;

	auto player = new User("Hank",30);

	cout << player->Name <<"," << player->Age << endl;

	cout << Utility::Convert::FutlongToYard(1) << endl;

	int age;
	cin >> age ;
	cout << "Enter your age:" << age << endl;
	cout << "Your are in months is " << age * 12 << endl;

}
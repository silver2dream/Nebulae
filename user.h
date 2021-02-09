#include <string>

using namespace std;

class User {
public:
	User(string name, int age):
		Name(name),
		Age(age)
	{}

	string Name;
	int Age;
};
// merge_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> left, vector<int> right) {

	vector<int> result;
	for (; left.size() > 0 && right.size() > 0;) {
		if (left.at(0) < right.at(0)) {
			result.push_back(left.at(0));
			left.assign(left.begin() + 1, left.end());
		}
		else {
			result.push_back(right.at(0));
			right.assign(right.begin() + 1, right.end());
		}
	}

	for (auto val : left) {
		result.push_back(val);
	}

	for (auto val : right) {
		result.push_back(val);
	}

	return result;
}

vector<int> merge_sort(vector<int> container) {

    if (container.size() < 2)
        return container;

    auto mid = (int)(container.size() / 2);
    vector<int> left;
    left.assign(container.begin(), container.begin() + mid);

    vector<int> right;
    right.assign(container.begin() + mid, container.end());

    return merge(merge_sort(left), merge_sort(right));
}

int main()
{
	srand(time(NULL));
	vector<int> number;
	for (auto i = 0; i < 10; i++)
	{
		number.push_back(rand() % 100 + 1);
	}
	
    for (auto val : merge_sort(number))
    {
        cout << val <<" ";
    }
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

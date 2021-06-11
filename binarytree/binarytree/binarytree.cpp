// binarytree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


struct FNormalBinaryTree {
private:
     vector<int> data = {-1};

public:
    FNormalBinaryTree() {
        //data.push_back(-1);
    }

    void Traversal(int startidx) {
        if (startidx!=0 && startidx < data.size()) {
            auto val = data.at(startidx);
            if (val == -1) return;

            cout << val << " ";
            Traversal(startidx * 2);
            Traversal(startidx * 2 + 1);
        }
    }

    void Insert(int value) {
        data.push_back(value);
    }
};

int main() {
    FNormalBinaryTree tree;
    for (auto i = 1; i < 14; i++) {
        tree.Insert(i);
    }
    tree.Traversal(1);
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

#include <iostream>
#include "linkedlist.h"
#include <vector>

using namespace std;

void insertAfter(int x, int y, vector<int>& num1) {
    for (int i = 0; i < num1.size(); i++) {
        if (num1[i] == x) {
            num1.insert(num1.begin() + i + 1, y);
        }
    }
}

int main() {
    vector<int> num;
    int n;
    int x;
    int y;
    int z;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter a number: ";
        cin >> x;
        num.push_back(x);
    }
    cout << "The number to insert after: ";
    cin >> y;
    cout << "Enter the number you want to insert: ";
    cin >> z;
    insertAfter(y, z, num);

    LinkedList p;
    p.addNode(10);
    p.addNode(20);
    p.addNode(30);
    p.addVectorToList(num);
    cout << p.sum() << endl;
    p.display();

    return 0;
}

#include<iostream>
#include"Stack.h"

using namespace std;

int main2() {
	Stack d;
	while (true) {
		int ans;
		cout << "1 Pop, 2 Push, 3 Top element\n";
		cin >> ans;

		switch (ans)
		{
		case 1:
			cout << d.pop() << " popped from stack\n";
			break;
		case 2:
			int val;
			cout << "Enter value to add\n";
			cin >> val;
			d.push(val);
			break;
		case 3:
			cout << "Top element is " << d.peek() << endl;
			break;
		default:
			cout << "Sorry Didn't Get That\n";
			break;
		}
	}
}
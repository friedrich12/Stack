
#include<iostream>

using namespace std;

//Node
struct StackNode
{
	int data;
	struct StackNode* next;
};

struct StackNode* newNode(int data)
{
	struct StackNode* stackNode = (struct StackNode*) malloc(sizeof(struct StackNode));
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
}

int isEmpty(struct StackNode * root)
{
	return !root; // I this exist the stack has elements
}

void push(struct StackNode** root, int data) {
	struct StackNode* stacknode = newNode(data);
	stacknode->next = *root;
	*root = stacknode;
	printf("%d pushed to stack\n", data);
}

int pop(struct StackNode** root) {
	if (isEmpty(*root)) {
		return INT_MIN;
	}
	struct StackNode* temp = *root;
	*root = (*root)->next;
	int popped = temp->data;
	delete temp;
	return popped;
}

int peek(struct StackNode* root) {
	if (isEmpty(root)) {
		return INT_MIN;
	}
	return root->data;
}

int main() {
	struct StackNode* root = NULL;

	while (true) {
		int ans;
		cout << "1 Pop, 2 Push, 3 Top element\n";
		cin >> ans;

		switch (ans)
		{
			case 1:
				cout << pop(&root) << " popped from stack\n";
				break;
			case 2:
				int val;
				cout << "Enter value to add\n";
				cin >> val;
				push(&root, val);
				break;
			case 3:
				cout << "Top element is " << peek(root) << endl;
				break;
			default:
				cout << "Sorry Didn't Get That\n";
				break;
		}
	}	

	system("PAUSE");
	return 0;
}
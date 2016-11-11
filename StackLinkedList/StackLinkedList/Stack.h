#include<iostream>

using namespace std;

//Node
struct StackNode
{
	int data;
	struct StackNode* next;
};

class Stack
{
public:
	Stack();
	~Stack();

	StackNode* newNode(int data1);
	void push(int data);
	int isEmpty();
	int peek();
	int pop();
private:
	StackNode* root;
};

Stack::Stack()
{

}

Stack::~Stack()
{
}

StackNode* Stack::newNode(int data1)
{
	StackNode* stackNode = new StackNode;
	stackNode->data = data1;
	stackNode->next = NULL;
	return stackNode;
}

int Stack::isEmpty()
{
	return !root; // I this exist the stack has elements
}

void Stack::push(int data) {
	StackNode* stackNode = newNode(data);
	stackNode->next = root;
	root = stackNode;
	cout << data << " pushed to stack\n\n";
}

int Stack::pop() {
	if (isEmpty()) {
		return INT_MIN;
	}

	StackNode* temp = root;
	root = (root)->next;
	int popped = temp->data;
	delete temp;
	return popped;
}

int Stack::peek() {
	if (isEmpty()) {
		return INT_MIN;
	}
	return root->data;
}


#include <iostream>
#include <string>

using namespace std;

struct Node
{

	int x_value; int y_value; struct Node* next;

};
struct Node* head, * z;
void Init_LinkedList();
void Insert_before_z(int a, int b);
void print_LinkedList();
void Insert_after_head(int a, int b);
void Delete_Node_by_Value(int a, int b);

int main() {

	Init_LinkedList();
	Insert_before_z(5, 5);
	Insert_after_head(1, 1);
	Insert_before_z(2, 2);
	Insert_after_head(2, 2);
	Insert_after_head(3, 3);
	Insert_after_head(2, 2);
	cout << endl << "After inserting data, print linked lists.\n\n";

	print_LinkedList();

	Delete_Node_by_Value(2, 2);
	Delete_Node_by_Value(1, 1);
	cout << endl << "After deleting data, print linked lists.\n\n";
	print_LinkedList();
	return(0);
}

void Init_LinkedList() {
	//creates head and z node
	head = new Node;
	z = new Node;
	head->next = z;
	z->next = z;
}

void Insert_before_z(int a, int b) {
	//t points to header node

	struct Node* t, * x;

	t = head;

	while (t->next != z) {
		t = t->next;

	}
	x = new Node;
	x->x_value = a;
	x->y_value = b;
	x->next = t->next; t->next = x;

}

void print_LinkedList()
{
	struct Node* t, * x;
	t = head;
	while (t->next != z) {

		t = t->next;
		cout << t->x_value << "\t" << t->y_value << endl;
	}
	

}

void Delete_Node_by_Value(int a, int b) {
	struct Node* t, * x;
	t = head;
	while (t->next != z) {
		if (t->next->x_value == a && t->next->y_value == b) {
			t->next = t->next->next;
		}
		t = t->next;
	}

}

void Insert_after_head(int a, int b) {
	
	struct Node* t, * x;

	t = head;

	x = new Node;
	x->x_value = a;
	x->y_value = b;
	x->next = t->next; t->next = x;
}

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
int main() {

	Init_LinkedList();
	Insert_before_z(5, 5);
	Insert_before_z(4, 4);
	Insert_before_z(3, 3);
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

#include <iostream>
#include <cstdio>

using namespace std;

struct Node
{
	int value;
	Node *next;
	Node *prev;
	Node (int data)
	{
		value = data;
		next = NULL;
		prev = NULL;
	}
};

struct Dll
{
	Node *head;
	Node *tail;
	int size;
	Dll ()
	{
		head = tail = NULL;
		size = 0;
	}

	void insertFirst(int x)
	{
		Node* temp = new Node(x);
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			head->prev = temp;
			temp->next = head;
			head = temp;
		}
		size++;
	}

	void insertLast(int x)
	{
		Node* temp = new Node(x);
		if (tail == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
		}
		size++;
	}

	void removeFirst()
	{
		if (head == NULL) return;
		head = head->next;
		if (head != NULL) 
		{
			head->prev = NULL;
		}
		else tail = NULL;
		size--;
	}

	void removeLast()
	{
		if (tail == NULL) return;
		tail = tail->prev;
		if (tail != NULL) 
		{
			tail->next = NULL;
		}
		else head = NULL;
		size--;
	}

	void remove(int x)
	{
		Node* current = head;
		while (current != NULL && current->value != x)
			current = current->next;

		if (current == NULL) return;

		if (current == head)
		{
			removeFirst();
		}
		else if (current == tail)
		{
			removeLast();
		}
		else
		{
			current->next->prev = current->prev;
			current->prev->next = current->next;
			size--;
		}
	}

	void print()
	{
		Node* current = head;
		while (current != NULL)
		{
			if (current != head) cout << " ";
			cout << current->value;
			current = current->next;
		}
		cout << endl;
	}

	int count(int x)
	{
		int ans = 0;
		Node* cur = head;
		for (int i = 0; i < size; i++)
		{
			if (cur->value == x) ans++;
			cur = cur->next;
		}
		return ans;
	}

	int getNth(int n)
	{
		if (n >= size) return -1;
		Node* cur = head;
		for (int i = 0; i < n; i++)
		{
			cur = cur->next;
		}
		return cur->value;
	}
};



int main()
{
	auto dll = new Dll();

	int q;
	cin >> q;
	string s;
	int x;
	for (int i = 0; i < q; i++)
	{
		cin >> s;
		if (s == "insertFirst")
		{
			cin >> x;
			dll->insertFirst(x);

		}
		if (s == "insertLast")
		{
			cin >> x;
			dll->insertLast(x);
		}
		if (s == "delete")
		{
			cin >> x;
			dll->remove(x);
		}
		if (s == "deleteFirst")
		{
			dll->removeFirst();
		}
		if (s == "deleteLast")
		{
			dll->removeLast();
		}
		if (s == "getNth")
		{
			cin >> x;
			cout << dll->getNth(x) << endl;
		}
		if (s == "cnt")
		{
			cin >> x;
			cout << dll->count(x) << endl;
		}
	}

	dll->print();
	

	return 0;
}
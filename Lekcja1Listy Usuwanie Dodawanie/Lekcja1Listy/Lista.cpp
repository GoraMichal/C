#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
	int val;
	node *next;
};
node *head = NULL;

void addhead(int x)
{
	node *pom = new node;
	pom -> val = x;
	pom -> next = head;
	head = pom;
	pom = NULL;
}

void addkoniec(int x)
{
	if (head == NULL)
	{
		addhead(x);
	}
	else
	{
		node *pom = head;
		while (pom -> next != NULL)
		{
			pom = pom -> next;
		}
		pom -> next = new node;
		pom -> next -> val = x;
		pom -> next -> next = NULL;
	}
}

void addza(int x, int y)
{	
	node *pom = head;
	while (pom -> next != NULL)
	{
		if (pom -> val == y)
		{
			node *pom2 = new node;
			pom2 -> val = x;
			pom2 -> next = pom -> next;  //nastêpnym elementem za nowym bêdzie nastêpny element za e
			pom -> next = pom2;  //nowy element wstawiamy za e
		}	
		pom = pom -> next;
	}
}

void addprzed(int x, int y)
{	
	node *pom = head;
	while (pom -> next != NULL)
	{
		if ((pom -> next) -> val == y)
		{
			node *pom2 = new node;
			pom2 -> val = x;
			pom2 -> next = pom -> next;
			pom -> next = pom2;
			return;
		}	
		pom = pom -> next;
	}
}

void addpomiedzy(int x, int y, int z)
{
	node *pom = head;
	node *pom2 = pom -> next;
	while (pom -> next !=NULL)
	{
		if (pom->val==x && pom2->val ==y)
		{
			node *pom3 = new node;
			pom3 -> val = z;
			pom3 -> next = pom -> next;
			pom -> next = pom3;
			return;
		}
		else
		{
		pom = pom -> next;
		pom2 = pom2 -> next;
		}
	}
}

void deletehead()
{
	if (head!=NULL)
	{
		node *pom;
		pom = head->next;
		delete(head);
		head=pom;
	}
}

void deleteostatni()
{
	node *pom = head;
	while ((pom -> next) -> next != NULL)  //element przedostatni
	{
		pom = pom -> next;
	}
		pom -> next = NULL;
		return;
}

void deleteza(int x)
{
	node *pom = head;
	node *pom2 = pom -> next;
	while (pom != NULL)
	{
		if (pom -> val == x)
		{
			pom2 = pom -> next;  
			pom -> next = pom2 -> next; 
			delete (pom2);
			pom = NULL;
			pom2 = NULL;
		}
		else
		{
		pom = pom -> next;
		pom2 = pom2 -> next;
		}
	}
}

void deleteprzed(int x)
{
	if (head != NULL && head -> next != NULL)
	{
		node *pom = head;
		if (pom -> next -> val == x)
		{
			head = pom -> next;
			delete(pom);
		}
		else
		{
			node *pom1 = head;
			node *pom2 = pom1 ->next;
			while (pom2 != NULL)
			{
				if (pom2 -> next -> val == x)
				{
					pom2 = pom1 -> next;
					pom1 -> next = pom2 -> next;
					delete (pom2);
					pom1 = NULL;
					pom2 = NULL;
				}
				else
				{
					pom1 = pom1 -> next;
					pom2 = pom2 -> next;
				}
			}
		}
	}
}

void deletewybrany(int x)
{
	if (head == NULL)
	{
		node *pom;
		pom = head->next;
		delete(head);
		head=pom;
	}
	else
	{
		node *pom1 = head;
		node *pom2 = head -> next;
		while (pom2 != NULL)
		{
			if (pom2 -> val == x)
			{
				pom2 = pom1 -> next;  // w p ustawiamy adres elementu poprzedzaj¹cego e
				pom1 -> next = pom2 -> next; //od³¹czamy e od listy
				delete(pom2);
				pom1 = NULL;
				pom2 = NULL;
			}
			else
			{
			pom1 = pom1 -> next;
			pom2 = pom2 -> next;
			}
		}
	}
}

void show(node *head)
{
	node *pom = head;
	while (pom!=NULL)
	{
		cout << pom -> val << "->";
		pom = pom -> next;
	}
}

void kopia(node *head)
{ 
if (head!=0)
{
node *pom; 
pom=head;
while(pom!=0) 
{
node *kopia = new node; 
kopia->val=pom->val; 
kopia->next=pom->next; 
pom->next=kopia; 
pom=kopia->next; 
} 
}
}

int main(int argc, char *argv[])
{
	addhead(5);
	addhead(45);
	addhead(3);
	addhead(53);
	addhead(9);
	addhead(72);
	addhead(26);
	addhead(14);
	addhead(35);
	addhead(13);
	addhead(7);
	show(head);

//	cout << endl << "dodanie na koniec" << endl;
//	addkoniec(98);
//	show(head);

//	cout << endl << "dodanie za element" << endl;
//	addza(100, 14);
//	show(head);

//	cout << endl << "dodanie przed element" << endl;
//	addprzed(100, 35);
//	show(head);

//	cout << endl << "dodanie pomiedzy x i y" << endl;
//	addpomiedzy(35,9,101);
//	show(head);

//	cout << endl << "usuniecie glowy" << endl;
//	deletehead();
//	show(head);

//	cout << endl << "usuniecie ostatniego elementu" << endl;
//	deleteostatni();
//	show(head);

//	cout << endl << "usuniecie elementu za x" << endl;
//	deleteza(35);
//	show(head);

//	cout << endl << "usuniecie elementu przed x" << endl;
//	deleteprzed(72);
//	show(head);

//	cout << endl << "usuniecie wybranego elementu" << endl;
//	deletewybrany(72);
//	show(head);

	cout << endl << "kopia" << endl;
	kopia(head);
	show(head);

	system("pause");
}

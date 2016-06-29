#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
	int val;
	node *next;
};
node *head = NULL;

void add(int x)
{
	node *pom = new node;
	pom -> val = x;
	pom -> next = head;
	head = pom;
}

void wstaw(int x, int y)
{
	if (head != NULL)
	{
		node *pom = head;
		while( pom != NULL)
		{
			if (pom -> val == y)
			{
				pom -> val = x;
			}
			pom = pom -> next;
		}
	}
}

void dublowac()
{
	if (head != NULL)
	{
		node* pom = head;
		while (pom != NULL)
		{
			node* pom2 = new node;
			pom2 -> val = pom -> val;
			pom2 -> next = pom -> next;
			pom -> next = pom2;
			pom = pom2 -> next;  //w p umieœæ zawartoœæ pola next elementu wskazywanego przez p
		}
	}
}

void odwroc()
{
	node *pom = head;
	while(pom -> next != NULL)
	{
		node *pom2 = new node;
		pom2 = pom -> next;
		pom -> next = pom2 -> next;
		pom2 -> next = head;
		head = pom2;
	}
}

void zamiana()
{
	if (head!=NULL && head->next != NULL)
	{
		node *pom = head;
		while (pom->next!=NULL)
		{
			pom = pom -> next;
		}
		node *pom1 = head;
		node *pom2 = pom1 -> next;
		pom1 -> next = NULL;
		head = pom2;
		pom -> next = pom1;
	}
	{
		node *pom3 = head;
		node *pom4 = head -> next;
		while (pom4->next->next !=NULL)
		{
			pom3 = pom3 -> next;
			pom4 = pom4 -> next;
		}
		if (pom4->next->next == NULL)
		{	
			pom3 -> next = pom4 -> next;
			pom4 -> next = head;
			head = pom4;
			pom3 = NULL;
			pom4 = NULL;
		}
		return;
	}
}

void druginakoniec()
{
	node *pom = head;
	while (pom->next != NULL)
	{
		pom=pom->next;
	}
	node *pom1 = head -> next;
	node *pom2 = pom1 -> next;
	head -> next = pom2;
	pom1 -> next = NULL;
	pom -> next = pom1;
}

void kopiuj(int x, int y)
{
	if (head!=NULL)
	{
		node *pom = head;
		while(pom->val!=x )
		{
			pom=pom->next;
		}
		if(pom!=NULL)
		{
			node *pom2=pom->next;
			while(pom2->val!=y)
			{
				pom2 = pom -> next;
			}

			if(pom2!=NULL)
				{
				node *pom3=pom2;
				while(pom3->next!=NULL)
				{
					pom3 = pom3 -> next;
				}
				while(pom->next!=pom2)
				{
					pom3->next =new node;
					pom3 = pom3 -> next;
					pom3 -> val = pom -> next -> val;
					pom = pom -> next;
				}
				pom3 -> next = NULL;
				}
		}			
	}
}

void kopiowanie()
{
	if (head!=NULL)
	{
		node *pom1 = head;
		while (pom1!=NULL)
		{
			node *pom2 = new node;
			while(pom2->next!=NULL)
			{
				pom2=pom2->next;
			}
			node *pom3 = new node;
			pom3 -> val = pom1 -> val;				
			pom1 = pom1 ->next;
		}
		pom1 -> next = NULL;
	}
}

void show()
{
	node *pom = head;
	while (pom != NULL)
	{
		cout << pom -> val << "->";
		pom = pom -> next;
	}
}

int main(int argc, char *argv[])
{
	add(6);
	add(13);
	add(24);
	add(35);
	add(47);
	add(51);
	show();
	cout<< endl;

	//cout << "Wstawianie za cos" << endl;
	//wstaw(35,13);
	//show();

	//cout << "Dublowanie" << endl;
	//dublowac();
	//show();

	//cout << "Odwracanie" << endl;
	//odwroc();
	//show();

	//cout << "Zamiana" << endl;
	//zamiana();
	//show();

	//cout << "druginakoniec" << endl;
	//druginakoniec();
	//show();

	//kopiuj(51,13);
	kopiowanie();
	show();

	system ("pause");
}
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


// Typy dla dynamicznej tablicy list sąsiedztwa

struct slistEl
{
  slistEl * next;
  int v;
};

int main() 

{
  int n,m,i,v1,v2;
  slistEl ** A;
  slistEl *p,*r;

  fstream plik;
  plik.open("graf.txt"); 

  plik >> n >> m;         // Czytamy liczbę wierzchołków i krawędzi

  A = new slistEl * [n]; // Tworzymy tablicę list sąsiedztwa

  // Tablicę wypełniamy pustymi listami

  for(i = 0; i < n; i++) A[i] = NULL;

  // Odczytujemy kolejne definicje krawędzi

  for(i = 0; i < m; i++)
  {
    plik >> v1 >> v2;    // Wierzchołek startowy i końcowy krawędzi
    p = new slistEl;    // Tworzymy nowy element
    p->v = v2;          // Numerujemy go jako v2
    p->next = A[v1];    // Dodajemy go na początek listy A[v1]
    A[v1] = p;
  }

  cout << endl;

  // Wypisujemy zawartość tablicy list sąsiedztwa

  for(i = 0; i < n; i++)
  {
    cout << "A[" << i << "] =";
    p = A[i];
    while(p)
    {
      cout << setw(3) << p->v;
      p = p->next;
    }
    cout << endl;
  }

  // Usuwamy tablicę list sąsiedztwa

  for(i = 0; i < n; i++)
  {
    p = A[i];
    while(p)
    {
      r = p;
      p = p->next;
      delete r;
    }
  }
  delete [] A;

  cout << endl;

  system("Pause");
} 
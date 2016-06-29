#include <iostream>

using namespace std;

const int MAX_N = 100; // maksymalna ilość wierzchołków w grafie
const int INF = 2147483647;

struct TNode
{
  int node;            // numer wierzchołka
  int weight;          // waga krawędzi
  struct TNode * next; // następny element listy
};

int main()
{
  int i,j,u,n,m,x,y,z,v0;
  int d[MAX_N+1],p[MAX_N+1];
  bool QS[MAX_N+1];
  struct TNode *L[MAX_N+1],*pw;
  
// Inicjujemy struktury danych

  for(i = 1; i <= MAX_N; i++)
  {
    d[i]  = INF;    // koszty dojścia
    p[i]  = 0;      // poprzednik na ścieżce
    QS[i] = false; // przynależność do Q (false) lub S (true)
    L[i]  = NULL;   // lista sąsiedztwa
  }
  n = 0;

// Odczytujemy dane wejściowe
  cout<<"Numer wierzcholka startowego"<<endl;
  cin >> v0; // odczytujemy numer wierzchołka startowego
  cout<<"Ilosc krawedzi"<<endl;
  cin >> m;  // odczytujemy ilość krawędzi
  for(i = 1; i <= m; i++)
  {
    cout<<"Krawedz"<<endl;
	cin >> x;
	cout<<"Krawedz"<<endl;	
	cin >> y; 
	cout<<"Waga"<<endl;	
	cin >> z; // odczytujemy krawędź
    if(x > n) n = x;
    if(y > n) n = y;
    pw = new TNode;
    pw->next = L[x]; pw->node = y; pw->weight = z; L[x] = pw;
  }
  cout << endl;

  d[v0] = 0; // koszt dojścia dla v0 jest zerowy
  
  for(i = 1; i <= n; i++)
  {

// szukamy wierzchołka w Q o najmniejszym d

    u = -1;
    for(j = 1; j <= n; j++)
      if(!QS[j] && ((u == -1) || (d[j] < d[u]))) u = j;

// znaleziony wierzchołek przenosimy do S

    QS[u] = true;

// Modyfikujemy odpowiednio wszystkich sąsiadów z Q

    pw = L[u];
    while(pw)
    {
      if(!QS[pw->node] && (d[pw->node] > d[u] + pw->weight))
      {
        d[pw->node] = d[u] + pw->weight;
        p[pw->node] = u;
      }
      pw = pw->next;
    }
  }

// Gotowe, wyświetlamy wyniki

  int stos[MAX_N],ws;
  
  for(i = 1; i <= n; i++)
  {
    cout << i << ": ";
    ws = 0; j = i;

// Wierzchołki z końca ścieżki umieszczamy na stosie

    while(j)
    {
      stos[ws++] = j; j = p[j];
    }

// Wypisujemy kolejne wierzchołki ze szczytu stosu

    while(ws) cout << stos[--ws] << " ";
    
// Wypisujemy koszt dojścia

    cout << "#" << d[i] << endl;    
  }        
  char s[1];
  cin.getline(s,1);
  cin.getline(s,1);
}
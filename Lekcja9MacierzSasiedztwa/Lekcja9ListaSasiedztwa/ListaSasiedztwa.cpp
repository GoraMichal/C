#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() 
{
fstream plik;
plik.open("graf.txt");           // stworzylem sb jakis plik graf
int n,kr,x,y;                     // pierwszą pozycją moim n jest liczba wierzchołków
                                  /* kr to bd liczba krawedzi, obie zczytam z pliku */
plik >> n;                        // tu zczytuje i wpisuje ja sb(chod nie trzeba)
cout << n << endl;

int **tab= new int *[n];     // Tworzymy tablicę wskaźników
for(int i = 0; i < n; i++)     
tab[i] = new int [n];
for(int i = 0; i < n; i++)
for(int j = 0; j < n; j++) 
tab[i][j] = 0;

plik >> kr;
for (int i=0; i<kr; i++) 
{								// zczytuje te kr,
	plik >> x >> y;                 // zczytuje te polaczenia
	tab[x][y]=1;
	tab[y][x]=1;            // wstawiam do tablicy 1 jesli jest polaczenie
}
cout << endl;

cout << "   ";
for(int i=0; i<n; i++) 
cout << setw(3) << i;
cout << endl << endl;
for(int i=0; i<n; i++) 
{
	cout << setw(3) << i;
	for(int j=0; j<n; j++) 							
	cout << setw(3) <<tab[i][j]; // tutaj znowu wypisalem ale juz z tymi jedynkami
	cout << endl;
}
system("Pause");
}
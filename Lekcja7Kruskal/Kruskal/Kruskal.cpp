#include<algorithm>
using namespace std;
/*
	Rafa? Nowak ,  www.rafalnowak.pl
	2008.02.27
*/
int tab[7000], ile[7000]; // 7000 - to liczba wszystkich elementów
 
int Find(int a) { return (tab[a]==a) ? a : (tab[a] = Find(tab[a])); }
bool Union(int a, int b)
{
	int fa = Find(a); // szukaj reprezentanta zbioru zawieraj?cego element 'a'
	int fb = Find(b); // szukaj reprezentanta zbioru zawieraj?cego element 'b'
 
	if (fa==fb) return false; // nie trzeba nic ??czy?
	if (ile[fa] <= ile[fb])
	{
		ile[fb] += ile[fa];
		tab[fa] = fb;
	}
	else
	{
		ile[fa] += ile[fb];
		tab[fb] = fa;
	}
	return true;
}
 
pair< int,pair<int,int> > Edges[300000]; // tablica kraw?dzi do posortowania
 
int main(void)
{
	/*
	Na poczatku mamy n zbiorów roz??cznych : ka?dy ma jeden elelement
	{0}, {1}, {2}, {3}, {4}, {5}, {6}, {7}, {8}, {9}
	*/
	int n, m, a,b,c,cost=0;
	scanf("%d %d", &n, &m);
	for (int i=0; i<n; i++)
	{
		tab[i] = i; //	reprezentantem zbioru zawieraj?cego element
		//		'i' jest np 'i' (nikt inny by? nie mo?e :-)
		ile[i] = 1; //	jeden element; chyba jasne, co nie?
	}
	for (int i=0; i<m; i++)
	{
		scanf("%d %d %d", &a, &b, &c); a--; b--;;
		Edges[i] = make_pair( c, make_pair(a,b) );
	}
	sort(Edges, Edges+m);
	for (int i=0; i<m; i++)
		if ( Union(Edges[i].second.first,Edges[i].second.second) )
		{
			cost += Edges[i].first;
			// kraw?dz drzewa : Edges[i].second.first -- Edges[i].second.second
		}
	printf("%d\n", cost);
	return 0;
}
    #include <iostream>
     
    using namespace std;
     
    class node
    {
        public:
        bool plus;
        int wsp;
        int x;
        node * next;
        node()
        {
            wsp=0;
            x=0;
            plus=0;
            next=NULL;
        }
        node *add(node *head,int wsp,int x)
        {
            if(head==NULL)
            {
                head=new node();
                head->next=NULL;
            }
            node *pom=new node;
            pom->wsp=wsp;
            pom->x=x;
            pom->next=head;
            pom->plus=1;
            head=pom;
            return head;
        }
    };
     
    node* mnozenie(node* wiel_1, node* wiel_2)
    {
        node* pom=wiel_1;
        for(;pom->next!=NULL;pom=pom->next)
        {
            for(node* pom2=wiel_2;pom2->next!=NULL;pom2=pom2->next)
            {
                pom->wsp=pom->wsp*pom2->wsp;
                pom->x=pom->x+pom2->x;
            }
        }
        return wiel_1;
    }
     
    node* dodaj(node *wiel_1, node *wiel_2)
    {
        node *pom;
        node *pom2;
        node *pom3;
        pom=wiel_1;
        pom2=wiel_2;
        while(pom2->plus)
        {
            if(pom->x==pom2->x)
            {
                pom->wsp+=pom2->wsp;
                for(pom3=wiel_2;pom3!=pom2 && pom3->next!=pom2;pom3=pom3->next);
                    if(pom3==wiel_2)
                    {
                        wiel_2=wiel_2->next;
                        pom2=wiel_2;
                        delete pom3;
                    }
                    else
                    {
                        pom3->next=pom2->next;
                        pom3=pom2;
                        pom2=pom2->next;
                        delete pom3;
                        pom3=NULL;
                    }
            }
            else
            {
                if(pom->plus==0 || (pom->x<pom2->x) || (pom->x==pom2->x)|| (pom->x==pom2->x))
                {
                    if(pom==wiel_1)
                    {
                       for(pom3=wiel_2;pom3!=pom2 && pom3->next!=pom2;pom3=pom3->next);
                            if(pom3==wiel_2)
                            {
                                wiel_2=wiel_2->next;
                            }
                            else
                                pom3->next=pom2->next;
                       pom3=pom2->next;
                       pom2->next=pom;
                       wiel_1=pom2;
                       pom2=pom3;
                    }
                    else
                    {
                        for(pom3=wiel_2;pom3!=pom2 && pom3->next!=pom2;pom3=pom3->next);
                            if(pom3==wiel_2)
                            {
                                wiel_2=wiel_2->next;
                            }
                            else
                                pom3->next=pom2->next;
                        for(pom3=wiel_1;pom3!=pom && pom3->next!=pom;pom3=pom3->next);
                            pom3->next=pom2;
                        pom3=pom2->next;
                        pom2->next=pom;
                        pom2=pom3;
                    }
                }
                else
                    if(pom->plus!=0)
                        pom=pom->next;
            }
        }
        return wiel_1;
    }
     
    void wypisz(node *wiel)
    {
        for(node *pom=wiel;pom!=NULL;pom=pom->next)
        {
            if(pom->wsp!=0)
            {
                cout << " " << pom->wsp << " *";
                if(pom->x!=0)
                    cout << " x^" << pom->x;
            }
            if(pom->next!=NULL && pom->next->wsp>0)
                cout << " +";
        }
    }
     
    int main()
    {
        node *wiel_1=NULL;
        node *wiel_2=NULL;
        node *wiel_3=NULL;
        int n,wartosc,x;
        cout << "Ile wyrazow maja miec wielomiany?" << endl;
        cin >> n;
        for(int i=0;i<n;i++)
        {  
            cout << "Podaj " << i+1 << " wspolczynnik pierwszego wielomianu: " << endl;
            cin >> wartosc;
            cout << "Podaj potege x przy " << i+1 << " wspolczynniku, w pierwszym wielomianie:" << endl;
            cin >> x;
            wiel_1=wiel_1->add(wiel_1,wartosc,x);
        }
        for(int i=0;i<n;i++)
        {  
            cout << "Podaj " << i+1 << " wspolczynnik drugiego wielomianu: " << endl;
            cin >> wartosc;
            cout << "Podaj potege x przy " << i+1 << " wspolczynniku, w drugim wielomianie:" << endl;
            cin >> x;
            wiel_2=wiel_2->add(wiel_2,wartosc,x);
        }
        cout << "Pierwszy wielomian" << endl;
        wypisz(wiel_1);
     
        cout << endl << "Drugi wielomian" << endl;
        wypisz(wiel_2);
						
        wiel_3=dodaj(wiel_1,wiel_2);
        cout << endl << "Wynik dodawania" << endl;
        wypisz(wiel_3);

		wiel_3=mnozenie(wiel_1,wiel_2);
        cout << endl << "Wynik mnozenia" << endl;
        wypisz(wiel_3);

        system("pause");
    }

#include <iostream>


using namespace std;

int dodawanie()
{   
    // input
    double stopienA, stopienB, w;

    cout << "Stopien wielomianu A \n";
    cin >> stopienA;
    cout << "Stopien wielomianu B \n";
    cin >> stopienB;

    double tab1[1000], tab2[1000];

    // Czystka tabów
    for(int Z= 1000; Z>=0; Z--)
    {
        tab1[Z] = 0;
        tab2[Z] = 0;
    }
    // ===============

    cout <<"Wpisz po kolei wspolczynniki wielomianu A";
    for( int x = stopienA ; x>=0; x--)
    {
        cin>>tab1[x];
        if (tab1[x] != 0)
        {
            cout << tab1[x];
            if (x>1) cout <<"x^" << x << "  +  ";
            else{cout << "x^" << x; break;}
        }
    }
    cout << endl;
    cout <<"Wpisz po kolei wspolczynniki wielomianu B";
    for( int y = stopienB ; y>=0; y--)
    {
        cin>>tab2[y];
        if (tab2[y] != 0)
        {
            cout << tab2[y];
            if (y>1) cout <<"x^" << y << "  +  ";
            else{cout << "x^" << y; break;}
        }
    }
    cout << endl;
    // DODAWANIE WIELOMIANOW
    cout << "Wynik dodawania tych wielomianow:" << endl << endl;
    int G;
    if ( stopienA >= stopienB)
    {
        for (int G = 1; G<=stopienA; G++)
        {
        cout<<tab1[G]+tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
    else
    {
        for (int G = 1; G<=stopienB; G++)
        {
        cout<<tab1[G]+tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
}
	
int odejmowanie(){
        // input
    double stopienA, stopienB, w;

    cout << "Stopien wielomianu A (Odjemna) \n";
    cin >> stopienA;
    cout << "Stopien wielomianu B (Odjemnik) \n";
    cin >> stopienB;

    double tab1[1000], tab2[1000];

    // Czystka tabów
    for(int Z= 1000; Z>=0; Z--)
    {
        tab1[Z] = 0;
        tab2[Z] = 0;
    }
    // ===============

    cout <<"Wpisz po kolei wspolczynniki wielomianu A (Odjemnej)";
    for( int x = stopienA ; x>=0; x--)
    {
        cin>>tab1[x];
        if (tab1[x] != 0)
        {
            cout << tab1[x];
            if (x>1) cout <<"x^" << x << "  +  ";
            else{cout << "x^" << x; break;}
        }
    }
    cout << endl;
    cout <<"Wpisz po kolei wspolczynniki wielomianu B (Odjemnika)";
    for( int y = stopienB ; y>=0; y--)
    {
        cin>>tab2[y];
        if (tab2[y] != 0)
        {
            cout << tab2[y];
            if (y>1) cout <<"x^" << y << "  +  ";
            else{cout << "x^" << y; break;}
        }
    }
    cout << endl;
    //odejmowanie


    cout << endl << "Wynik odejmowania tych wielomianow:" << endl << endl;;
    int G;
    if ( stopienA >= stopienB)
    {
        for (int G = 1; G<=stopienA; G++)
        {
        cout<<tab1[G]-tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
    else
    {
        for (int G = 1; G<=stopienB; G++)
        {
        cout<<tab1[G]-tab2[G];
        cout<<"x^"<< G << "  +  ";
        }
    }
}

int mnozenie(){
        // input
    double stopienA, stopienB, w;

    cout << "Stopien wielomianu A \n";
    cin >> stopienA;
    cout << "Stopien wielomianu B \n";
    cin >> stopienB;

    double tab1[1000], tab2[1000];

    // Czystka tabów
    for(int Z= 1000; Z>=0; Z--)
    {
        tab1[Z] = 0;
        tab2[Z] = 0;
    }
    // ===============

    cout <<"Wpisz po kolei wspolczynniki wielomianu A";
    for( int x = stopienA ; x>=0; x--)
    {
        cin>>tab1[x];
        if (tab1[x] != 0)
        {
            cout << tab1[x];
            if (x>1) cout <<"x^" << x << "  +  ";
            else{cout << "x^" << x; break;}
        }
    }
    cout << endl;
    cout <<"Wpisz po kolei wspolczynniki wielomianu B";
    for( int y = stopienB ; y>=0; y--)
    {
        cin>>tab2[y];
        if (tab2[y] != 0)
        {
            cout << tab2[y];
            if (y>1) cout <<"x^" << y << "  +  ";
            else{cout << "x^" << y; break;}
        }
    }
    cout << endl;
    // Mnozenie

    cout << "Wynik mnozenia tych dwoch wielomianów to:" << endl;

	int i = 0;
	int c[100];
	
	for (int r = stopienA; r >= 0; r--) {
 		for (int t = stopienB; t >= 0; t-- ) {
		 	c[i] = tab1[r] * tab2[t]; 
		 	
		 	if (c[i] != 0) {
		   	   cout << c[i];
   	   		   if (r + t > 0) 
		   	   	  cout << "x^" << r + t << "  +  ";
		    }
		    i++;
 	 	} 
	}  			 

return 0; 
}
	

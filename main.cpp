#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <vector>

#include "CipherObject.h"

using namespace std;

void OdszyfrujPlik()
{
    string sciezka = "";

    string nazwaPliku, haslo;
    fstream plik;

    vector < string > tab;


    cout << "Podaj nazwe pliku" << endl;
    cin >> nazwaPliku;
//    nazwaPliku ="bbb";

//    cout << "Podaj haslo" << endl;
//    cin >> haslo;

    cout << "Otwieranie " <<sciezka+nazwaPliku+".txt"<< endl;

    plik.open(sciezka+nazwaPliku+".txt", ios::in );
    if( plik.good() )
    {
        string napis;
        cout << "Zawartosc pliku:" << endl<<endl;
        cout<<"----------"<<endl;
        while( !plik.eof() )
        {
            getline( plik, napis );
            cout << napis << endl;
            tab.push_back(napis);
        }
        plik.close();
        cout<<"----------"<<endl;

    }
    else
        cout << "Error! Nie udalo otworzyc sie pliku!" << endl;

    cout << "...Deszyfrowanie";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<"."<<endl;
    cout<<"----------"<<endl;
    plik.open(sciezka+nazwaPliku+".txt", ios::out | ios::trunc );
    for( int j = 0; j < tab.size(); j++ )
    {
        int x = -8;
        string tekst;
//        cout << tab[ i ] << endl;
        tekst = tab[j];
        for(int i=0; i<=tekst.length(); i++)
        {
            if(tekst[i]>=65 && tekst[i]<=90-x)
                tekst[i]=int(tekst[i])+x; //wielkie liter
            else if(tekst[i]>=91-x && tekst[i]<=90)
                tekst[i]=int(tekst[i])-26+x; // wielkie litery
            else if(tekst[i]>=97 && tekst[i]<=122-x)
                tekst[i]=int(tekst[i])+x; //ma³e liter
            else if(tekst[i]>=123-x && tekst[i]<=122)
                tekst[i]=int(tekst[i])-26+x; //ma³e litery
        }
        cout << tekst<<endl;
        plik<< tekst <<endl;
    }
    cout<<"----------"<<endl;
    plik.close();

}
void ZaszyfrujPlik()
{
    string sciezka = "C:\\Users\\Wiklos1\\Desktop\\notatniki\\szyfrowane\\";

    string nazwaPliku, haslo;
    fstream plik;

    vector < string > tab;


    cout << "Podaj nazwe pliku" << endl;
    cin >> nazwaPliku;
//    nazwaPliku ="aaa";

//    cout << "Podaj haslo" << endl;
//    cin >> haslo;

    cout << "Otwieranie " << sciezka+nazwaPliku+".txt"<< endl;

    plik.open(sciezka+nazwaPliku+".txt", ios::in );
    if( plik.good() )
    {
        string napis;
        cout << "Zawartosc pliku:" << endl<<endl;
        cout<<"----------"<<endl;
        while( !plik.eof() )
        {
            getline( plik, napis );
            cout << napis << endl;
            tab.push_back(napis);
        }
        plik.close();
        cout<<"----------"<<endl;

    }
    else
        cout << "Error! Nie udalo otworzyc sie pliku!" << endl;

    cout << "...Szyfrowanie";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<"."<<endl;
    cout<<"----------"<<endl;
    plik.open(sciezka+nazwaPliku+".txt", ios::out | ios::trunc );
    for( int j = 0; j < tab.size(); j++ )
    {
        int x = 8;
        string tekst;
//        cout << tab[ i ] << endl;
        tekst = tab[j];
        for(int i=0; i<=tekst.length(); i++)
        {
            if(tekst[i]>=65 && tekst[i]<=90-x)
                tekst[i]=int(tekst[i])+x; //wielkie liter
            else if(tekst[i]>=91-x && tekst[i]<=90)
                tekst[i]=int(tekst[i])-26+x; // wielkie litery
            else if(tekst[i]>=97 && tekst[i]<=122-x)
                tekst[i]=int(tekst[i])+x; //ma³e liter
            else if(tekst[i]>=123-x && tekst[i]<=122)
                tekst[i]=int(tekst[i])-26+x; //ma³e litery
        }
        cout << tekst<<endl;
        plik<< tekst <<endl;
    }
    cout<<"----------"<<endl;
    plik.close();

}
int main()
{
    CipherObject *o1 = new CipherObject();



    string nazwaPliku, haslo;
    fstream plik;
    int wybor;

    cout<<"1. Odszyfruj plik"<<endl;
    cout<<"2. Zaszyfruj plik"<<endl;
    cout<<"Wybor: ";
    cin>>wybor;

    if(wybor==1)
    {
        OdszyfrujPlik();
    }
    else if(wybor==2)
    {
        ZaszyfrujPlik();
    }
    else
    {
        cout<<"Zly wybor"<<endl;
        return 0;
    }

    cout<<"Koniec"<<endl;
    int koniec;
    cin>>koniec;



//    cout << "Podaj nazwe pliku" << endl;
//    cin >> nazwaPliku;
//nazwaPliku ="aaa";

//    cout << "Podaj haslo" << endl;
//    cin >> haslo;

//    cout << "Otwieranie " << nazwaPliku+".txt"<< endl;
//
//    plik.open(nazwaPliku+".txt", ios::in );
//    if( plik.good() )
//    {
//        string napis;
//        cout << "Zawartosc pliku:" << endl<<endl;
//        cout<<"----------"<<endl;
//        while( !plik.eof() )
//        {
//            getline( plik, napis );
//            cout << napis << endl;
//        }
//        plik.close();
//        cout<<"----------"<<endl;
//
//    } else cout << "Error! Nie udalo otworzyc sie pliku!" << endl;

//    cout << "...Deszyfrowanie";
//    Sleep(500);
//    cout<<".";
//    Sleep(500);
//    cout<<".";
//    Sleep(500);
//    cout<<".";

//string tekst; //zmienna do przechowywania naszego tekstu
//// UWAGA!!!  tekst wprowadzaæ bez spacji
//int x; // zmienna przechowujaca wspolczynnik przesuniecia <0;26>
//
//cout<<"podaj tekst do zaszyfrowania"<<endl;
//cin >>tekst; //tekst do zaszyfrowania
//cout<<"podaj wspolczynnik przesuniecia"<<endl;
//cin >> x; //o ile miejsc zamieniamy litery
//
//for(int i=0;i<=tekst.length();i++){
//if(tekst[i]>=65 && tekst[i]<=90-x) tekst[i]=int(tekst[i])+x; //wielkie liter
//else if(tekst[i]>=91-x && tekst[i]<=90) tekst[i]=int(tekst[i])-26+x; // wielkie litery
//else if(tekst[i]>=97 && tekst[i]<=122-x) tekst[i]=int(tekst[i])+x; //ma³e liter
//else if(tekst[i]>=123-x && tekst[i]<=122) tekst[i]=int(tekst[i])-26+x; //ma³e litery
//}
//cout << tekst<<endl;

    return 0;
}


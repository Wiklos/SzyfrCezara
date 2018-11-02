#include "CipherObject.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>

using namespace std;

CipherObject::CipherObject()
{
    cout<<"Konstruktor"<<endl;
}
CipherObject::~CipherObject()
{
cout<<"Destruktor"<<endl;
}
CipherObject::Encrypt()
{
cout<<"Encrypt"<<endl;
}
CipherObject::Decrypt()
{
    string fileName;
    string filePath;


cout<<"Decrypt"<<endl;
cout<<"File name:";
cin>>fileName;

this->LoadFile(fileName);

string sciezka = "";

        cout << "...Szyfrowanie...";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<".";
    Sleep(500);
    cout<<"."<<endl;
    cout<<"----------"<<endl;
    this->plik.open(sciezka+fileName, ios::out | ios::trunc );
    for( int j = 0; j < this->text.size(); j++ )
    {
        int x = 8;
        string tekst;
//        cout << tab[ i ] << endl;
        tekst = this->text[j];
        for(int i=0; i<=tekst.length(); i++)
        {
            if(tekst[i]>=65 && tekst[i]<=90-x)
                tekst[i]=int(tekst[i])+x; //wielkie liter
            else if(tekst[i]>=91-x && tekst[i]<=90)
                tekst[i]=int(tekst[i])-26+x; // wielkie litery
            else if(tekst[i]>=97 && tekst[i]<=122-x)
                tekst[i]=int(tekst[i])+x; //male liter
            else if(tekst[i]>=123-x && tekst[i]<=122)
                tekst[i]=int(tekst[i])-26+x; //male litery
        }
        cout << tekst<<endl;
        plik<< tekst <<endl;
    }
    cout<<"----------"<<endl;
    plik.close();



}
void CipherObject::LoadFile(string fileName)
{
cout<<"LoadFile"<<endl;
cout<<"Opening file:"<<fileName<<endl;


    vector < string > tab;
    string sciezka = "";

    this->plik.open(sciezka+fileName, ios::in );
    if( this->plik.good() )
    {
        string napis;
        cout << "Zawartosc pliku:" << endl<<endl;
        cout<<"----------"<<endl;
        while( !this->plik.eof() )
        {
            getline( this->plik, napis );
            cout << napis << endl;
            //tab.push_back(napis);
            this->setText(napis);
        }
        this->plik.close();
        cout<<"----------"<<endl;

    }
    else
        cout << "Error! Nie udalo otworzyc sie pliku!" << endl;




}
CipherObject::SaveFile()
{
cout<<"SaveFile"<<endl;
}
CipherObject::setText(string line)
{
this->text.push_back(line);
}

#ifndef CIPHEROBJECT_H_
#define CIPHEROBJECT_H_

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
class CipherObject
{
int key;
//string text;
vector < string > text;
fstream plik;

public:
CipherObject();
~CipherObject();
Encrypt();
Decrypt();
void LoadFile(string fileName);
SaveFile();
setText(string line);


};





#endif // CIPHEROBJECT_H_

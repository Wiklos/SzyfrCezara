#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include <vector>

#include "CipherObject.h"

using namespace std;

int main()
{
    CipherObject *object = new CipherObject();

    int choose;

    while(choose!=0)
    {
        cout<<"1. Encrypt file"<<endl;
        cout<<"2. Decrypt file"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Pick one: ";
        cin>>choose;
        if(choose==1)
        {
            object->Encrypt();
        }
        else if(choose==2)
        {
            object->Decrypt();
        }
        else
        {
            cout<<"Wrong choice"<<endl;

        }
    }
    return 0;
}


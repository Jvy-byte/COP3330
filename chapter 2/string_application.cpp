/*
                                                Jayden Williams 
                                                COP 3330 -OOP
                                                This program reads txt file
*/


#include <iostream>
#include <stdio.h> // printf 
#include <fstream> // this libary used to read text files
#include <cstdlib> // used for ceer, identify if s file exist
#include <string>


using namespace std;

int main()
{

    ifstream InputFile;
    string name;
    string id;
    string phone;
    string clientInfo;

    InputFile.open("agenda_phone.txt"); // open file

    if(!InputFile)
    {
            cerr << "Error: file could not be opened" << endl; // cerr checks if file couldnt be opened
            exit(1);
    }
         getline(InputFile,clientInfo);

    while(!InputFile.eof()) // eof() method used to check if flie line is empty or not
    {
            printf(" Client Info: %s", clientInfo.c_str());
            getline(InputFile,clientInfo);
    }

    InputFile.close();

    cout <<"All Clients Loaded...." << endl;



 



    return 0;
}



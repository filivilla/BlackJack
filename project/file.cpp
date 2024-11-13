#include"file.h"
#include <iostream>
#include<fstream>
using namespace std;

int file::checks_file(ifstream& x)
{
    if (!x)
    {
        cout << "file not found";
        return 1;
    }
}


//TODO:add player names to the file 
void file::input_info(ifstream& x,int& num_players)
{
    cout << "Enter the number of players: ";
}
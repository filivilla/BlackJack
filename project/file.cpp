#include"file.h"
#include <iostream>
#include<fstream>
using namespace std;

int file::open_file(ifstream& x,ofstream& y)
{
    if (!x)
    {
        cout << "file not found";
        return 1;
    }
}

void file::input_info(ifstream& x,int& num_players)
{
    cout << "Enter the number of players: ";
    
}
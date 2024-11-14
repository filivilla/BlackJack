#include"file.h"
#include <iostream>
using namespace std;

int file::open_file(fstream& x,ofstream& y,string name1 ,string name2)
{
    x.open(name1);
    y.open(name2);
    if (!x)
    {
        cout << "file not found";
        return 1;
    }
}

void file::input_info(fstream& x,int& num_players)
{
    cout << "Enter the number of players: ";
    
}
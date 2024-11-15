#include"file.h"
#include <iostream>
#include<fstream>
using namespace std;


void file::input_info(ifstream& x,int& num_players)
{
    cout << "Enter the number of players: ";
    cin >> num_players;
    
}
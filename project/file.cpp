#include"file.h"
#include <iostream>
using namespace std;

int file::open_file(ifstream& x, string name)
{
    x.open(name);
    if (!x)
    {
        cout << "file not found";
        return 1;
    }
}

void file::input_info(ifstream& x)
{

}
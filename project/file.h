#include <fstream>
using namespace std;
class file{
    public:
    int open_file(fstream& x,ofstream& y,string name1, string name2);
    void input_info(fstream& x,int& num_players);
};
#include <fstream>
using namespace std;
class file{
    public:
    int open_file(ifstream& x,ofstream& y);
    void input_info(ifstream& x,int& num_players);
};
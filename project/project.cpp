//Black Jack Game

#include <iostream>//preprocessing directive for input and output
#include <ctime>//preporcessing directve for time usage
#include <random>//preporcessing directive for random function
#include <string>//preprocessing directive for string functions
#include <fstream>//preprocessing directive for file functions 
#include"file.h"//access to class 
using namespace std;//name change for cin and cout
struct deck{//struct deck to hold the suits 
string Hearts[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace",}//heart suit
;string Spades[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace",}; //spades
string Clubs[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace",};//clubs
string Diamonds[13] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace",}; };//diamonds
int main()//header file for main function 
{
    file object;//object for the class 


    ifstream inputfile("Players.txt");//file to read from, to read player names
    ofstream outputfile("Score.out");//file to write out, to write out player scores

    deck card;//struct object to be able to use the different sets 

    int num_players;//number of players,declared variable
    int score[num_players];//score for each player, array declared 
    int dealer;//dealers score , variable declared
    int x;//determining the ace value for dealer, variable declared

    if(!inputfile)//checks if the file was opened or not
    {
        cout << "File not found";
        return 1;//terminates the program 
    }//end if 

    object.input_info(inputfile,num_players);

    

    /*x = 21 - dealer;//ace
    dealer += x;//adds the ace value to the dealers hand

    srand(time(0));//seed the random function to be able to find what card is drawn 
    */
    return 0;//returns 0

}//end main 
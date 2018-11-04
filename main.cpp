#include <iostream>
#include <cstring>
#include <fstream>
//#include "tokens.h" - We use later
using namespace std;

int main(int argc, char* argv[])
{
        ifstream infile1;
        for(int i = 1; i < argc; i++)
        {
            infile1.open(argv[i]);
            if(argc > 2)
            {
                cout << "TOO MANY FILENAMES" << endl;
                return -1;
            }
            else if (infile1.is_open() == false)
            {
                cout << "COULD NOT OPEN " << argv[i] << endl;
                return -1;
            }
            else if (infile1.peek() == EOF)
            {
                cout << "0: No statements in program" << endl;
                return -1;
            }
        }
    return 0; 
}
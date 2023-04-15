#include <iostream>
#include <fstream>

using namespace std;
const int SIZE = 3;
void printtriangle(int numbers[][SIZE]);

void printtriangle(int num[][SIZE])
{
    ofstream ofs;

    ofs.open("output.txt");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < i + 1; j++)
            ofs << num[i][j] << "\t";
        ofs << endl;
    }
}
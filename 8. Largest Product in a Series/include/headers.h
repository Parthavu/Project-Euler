#include <iostream>
#include <fstream>
using namespace std;

class Input
{
    int digits[20][50];

    public:
    Input(string);
    void testIfRead();
    long long int product(int row, int column, int n);
    long long int adjacentProduct(int);
    
};
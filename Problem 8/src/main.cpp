#include <iostream>
#include <fstream>
#include "headers.h"

using namespace std;

int main()
{
    Input a("input.txt");
    //a.testIfRead();
    cout << a.adjacentProduct(13) << endl;;

    return 0;
}

#include "../include/headers.h"
using namespace std;

Input::Input(string pathToFile)
{
    vector<string> lines;

    ifstream inputFile(pathToFile);
    string line;
    while(getline(inputFile, line))
        lines.push_back(line);

    cout << "File read!" << endl;
    inputFile.close();

    int counter1 = 0;
    for(string line : lines){
        int counter2 = 0;
        for(char letter : line){
            digits[counter1][counter2] = int(letter) - 48;
            counter2++;
        }
        counter1++;
    }
}

long long int Input::product(int row, int column, int n)
{
    long long int product = 1;

    for(int i = 0; i < n; i++)
        product *= digits[row][column + i];

    return product;
}

long long int Input::adjacentProduct(int n)
{
    long long int highestProduct = 0;
    int highRow = 0;
    int highColumn = 0;

    for(int row = 0; row < 20; row++){
        for(int i = 0; i < 50 - n - 1; i++){
            if(product(row, i, n) > highestProduct){
                highestProduct = product(row, i, n);
                highRow = row + 1;
                highColumn = i + 1;
            }
        }
    }

    cout << highRow << ", " << highColumn << endl;
    return highestProduct;
}

void Input::testIfRead()
{   
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 50; j++)
            cout << digits[i][j] << " ";
        cout << endl;
    }
}

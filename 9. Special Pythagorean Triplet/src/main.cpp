#include <iostream>
#include <math.h>

using namespace std;

long int return_abc(int m, int n)
{
    return (pow(m, 4) - n*n)*2*m*sqrt(n);
}

bool perfect_square(int x)
{
    int y = sqrt(x);

    if(y * y == x)
        return true;
    
    return false;
}

void solution(int& m, int& n)
{
    for(long int i = 1; i < 1000; i++){
        if(perfect_square(i) and perfect_square(i + 2000)){
            n = i;
            m = (sqrt(n + 2000) - sqrt(n))/2;
        }
    }
}

void print_triplet(int m, int n)
{
    int a = m*m - n;
    int b = 2*m*sqrt(n);
    int c = m*m + n;

    cout << "The triplet is: " << a << " " << b << " " << c << endl;
}

int main()
{
    int m, n;

    solution(m, n);
    print_triplet(m, n);
    cout << "Product: " << return_abc(m, n) << endl;

    return 0;
}

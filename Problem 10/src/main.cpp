#include <iostream>
#include<math.h>

using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i < n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int closestPrime(int n)
{
    for(int i = n - 1; i > 1; i--){
        if(isPrime(i))
            return i;
    }

    return 0;
}

bool perfectSquare(int n)
{
    int y = sqrt(n);

    if(y*y == n)
        return true;
    
    return false;
}

bool conjecture(int n)
{
    int x = closestPrime(n);

    while(x > 2){
        if(perfectSquare((n - x)/2)){
            cout << n << " = " << closestPrime(x) << " + 2*(" << sqrt((n-x)/2) << "^2)" << endl; 
            
            return true;
        }
        x = closestPrime(x);
    }

    return false;
}

int main()
{
    int i = 9;
    while(conjecture(i)){
        i += 2;
        while(isPrime(i))
            i+= 2;
    }

    cout << "Conjecture is broken at: " << i << endl;

    return 0;
}

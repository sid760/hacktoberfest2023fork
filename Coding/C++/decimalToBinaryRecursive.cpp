#include <iostream>
#include <math.h>
#include <vector>
#include <sstream>
using namespace std;

//  iterative approach 2
int bin(int decimal)
{
    int binary = 0;
    int power;
    while (decimal > 0)
    {

        power = (int)log2(decimal);
        binary += (int)pow(10, power);
        decimal -= (int)pow(2, power);
    }

    return binary;
}

// recursive approach
int binRecursive(int decimal)
{
    int binary = 0;
    int power;
    if (decimal > 0)
    {
        // determining highest power of smaller than the no.
        power = (int)log2(decimal);
        // subtracting the no. with the determined pow of 2
        decimal -= (int)pow(2, power);
        // setting bit with 1 where pow of 2 was found
        binary = (int)pow(10, power);
        // recursive call:
        return binary + binRecursive(decimal);
    }
    return binary;
}

int main()
{
    // cout << decToBinary(10) << endl;
    cout << bin(10) << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << binRecursive(i) << endl;
    }

    return 0;
}

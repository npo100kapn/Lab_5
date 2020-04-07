#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    float vivod, step = M_PI/12;
    float h = 21;
    while(h <= 50)
    {
        vivod = 3 * sin(h) + cos(h);
        cout << vivod << " | ";
        h = h + step;
    }
    return 0;
}
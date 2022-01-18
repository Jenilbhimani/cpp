#include <iostream>
using namespace std;
class smiple
{
    float p, r, n, y;

public:
    smiple(float a, float b, float c)
    {
        p = a;
        r = b;
        n = c;
        y = a * b * c / 100;
        cout << "\n simple intrest: " << y;
    }
};
int main()
{
    smiple t1(1000, 2, 1), t2(2000, 2.5, 2);
}
#include <iostream>
using namespace std;
class cricle
{
    int c, r;

public:
    cricle(int a)
    {
        r = a;
        c = 3.14 * a * a;
        cout << "\n c :" << c;
    }
};
int main()
{
    cricle t1(5), t2(10);
}
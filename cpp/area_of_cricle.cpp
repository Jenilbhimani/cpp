#include <iostream>
using namespace std;
class cricle
{
    int c, r;

public:
    void cric(int a)
    {
        r = a;
        c = 3.14 * a * a;
        cout << "\n c :" << c;
    }
};
int main()
{
    cricle t1, t2;
    t1.cric(5);
    t2.cric(10);
}
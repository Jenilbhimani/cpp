#include <iostream>
using namespace std;
class bank
{
    int accno, blance;
    string myname;

public:
    static int count;
    bank(int accno, int blance, string myname)
    {
        this->accno = accno;
        this->blance = blance;
        this->myname = myname;
        count++;
    }
    void getdata()
    {
        cout << myname << " :- " << accno << " :" << blance << "\n";
    }
};
int bank::count;
int main()
{
    bank n(101, 1500, "jenil"), n2(1000, 1500, "sahuil");
    n.getdata();
    n2.getdata();
    cout << "\nno of accouts :-" << bank::count;
    return 0;
}

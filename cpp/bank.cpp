#include <iostream>
using namespace std;
class bank
{
    int accno, blance;
    string myname;

public:
    static int count;
    int a, b, c, d, m;
    bank(int accno, int blance, string myname)
    {
        this->accno = accno;
        this->blance = blance;
        this->myname = myname;
        count++;
    }

    void getdata()
    {
        cout << myname << " :" << accno << " :" << blance << "\n";
    }
    void wd()
    {
    j:
        cout << "\nwithdrow press '1'\n diposite press'2' \n for exit press :'3' \n";
        cin >> b;
        switch (b)
        {
        case 1:
        g:
            cout << "enter your amount:";
            cin >> c;
            if (blance >= c)
            {
                a = blance - c;

                cout << "\nAccount_no\tName\tbalance\twithdraw\tdeposit\tcurrent_Bal\n";
                cout << accno << "\t\t" << myname << "\t" << blance << "\t" << c << "\t\t0\t" << a;
            }
            else
            {
                cout << "\nNot Enough Balnce  in your account, Thank you \n";
                goto g;
            }
            blance = a;
            goto j;

            break;
        case 2:
            cout << "\nenter your diposite:";
            cin >> c;
            a = blance + c;

            cout << "\nAccount_no\tName\tbalance\twithdraw\tdeposit\tcurrent_Bal\n";
            cout << accno << "\t\t" << myname << " \t" << blance << "\t"
                 << "\t0\t" << c << "\t" << a;
            blance = a;
            goto j;
            break;
        case 3:
            cout << "thank you for coming";
        }
    }
};
int bank::count;
int main()
{
    bank n(201, 12000, "jenil");
    n.getdata();
    n.wd();
    cout << "\nno of accouts :" << bank::count;
    return 0;
}


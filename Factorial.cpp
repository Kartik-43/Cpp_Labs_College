#include <iostream>

using namespace std;


class Fact
{
    int x, res;

public :
    void setdata(void)
    {
        cout << "Enter the number you want factorial of : ";
        cin >> x;
    }

    void calculate(void)
    {
        res = 1;
        for (int i = 1; i <= x; i++)
        {
            res = res * i;
        }
    }

    void display(void)
    {
        cout << "\nThe factorial of " << x << " is ==> " << res << "\n\n" << endl;
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    Fact o1;
    o1.setdata();
    o1.calculate();
    o1.display();

    return 0;
}

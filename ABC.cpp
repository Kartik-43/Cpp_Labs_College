#include <iostream>

using namespace std;


class ABC
{
    int a, b, sum;

public :
    void setdata(void)
    {
        cout << "Enter number 1 :- ";
        cin >> a;

        cout << "\nEnter number 2 :- ";
        cin >> b;
    }

    void calculate(void)
    {
        sum = a + b;
    }

    void display(void)
    {
        cout << "\n\nThe sum of " << a << " and " << b << " is ==> " << sum << "\n\n" << endl;
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    ABC o1;
    o1.setdata();
    o1.calculate();
    o1.display();

    return 0;
}

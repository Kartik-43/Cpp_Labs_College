#include <iostream>

using namespace std;


class ABC
{
    int a, b, c;

public :
    void input(void)
    {
        cout << "Enter Num 1 :- ";
        cin >> a;

        cout << "\nEnter Num 2 :- ";
        cin >> b;

        cout << "\nEnter Num 3 :- ";
        cin >> c;
    }

    int calc(void)
    {
        return (a+b+c);
    }

    void display(void)
    {
        cout << "\n\nThe sum of " << a << " & " << b << " & " << c << " is ==> " << calc() << "\n\n" << endl;
    }
};


int main()
{
    cout<< "\n\nKartik Garg \nEnrolment Number - 01813203123 "<<endl;
    cout<< "IT - 1\nShift 1\n\n\n"<<endl;

    ABC o1;
    o1.input();
    o1.display();

    return 0;
}

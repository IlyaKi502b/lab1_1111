#include <iostream>
#include <cmath>

using namespace std;


class triangle
{
public:

	double a, b, c, p, s, rv, rop;


    void Square()
    {
        p = (a + b + c)/2;
        s = sqrt( p * (p-a) * (p-b) * (p-c) );

        cout << "Ploshad s = " << s << endl << endl;
    }

    void Radius()
    {
        rop = (a*b*c)/(4*s);

        rv = s/p;

        cout << "Opisanniy radius rop = " << rop << "\nVpisanniy radius rv = " << rv << endl << endl;
    }

    void Tip()
    {
        if ((a*a + b*b) > c*c)
            cout << "Ostriy" << endl;
        if ((a*a + b*b) < c*c)
            cout << "Tupoy" << endl;
        if ((a*a + b*b) == c*c)
            cout << "Pryamoy" << endl;
    }

    void Print()
    {
        cout << "Storona a = " << a << "\nStorona b = " << b << "\nStorona c = " << c << endl << endl;
    }

    bool operator == (triangle &abc)
    {

        return (a==abc.a)&&(b==abc.b)&&(c==abc.c);
    }
};


int main()
{
	triangle first;



	cout << "Vvedite dlinu storon" << endl;

    cin >> first.a >> first.b >> first.c;




    first.Print();

    first.Square();

    first.Radius();

    first.Tip();

	return 0;
}

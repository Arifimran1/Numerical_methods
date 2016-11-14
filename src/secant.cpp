#include "secant.h"
#include <bits/stdc++.h>

using namespace std;

secant::secant()
{
    //ctor
}

secant::~secant()
{
    //dtor
}
void secant::work()
{



    cout << "input the value of x4, x3, x2, x1, x0 respectively" << endl;

    cin >> x4 >> x3 >> x2 >> x1 >> x0;

    it = 0;
    while(1)
    {
        cout << "give the value of xi-1 and xi" << endl;
        cin >> xi0 >> xi1;
        if(func(xi0) == func(xi1))
        {
            cout << "the value of roots are same!!" << endl;
            if(it++ >= 5)
                return;
        }
        else
            break;

    }

    cout << "give error percentage" << endl;
    cin >> es;

    ea = 9999;





    while (ea > es)
    {
        xro = xi2;
        if(func(xi0) == func(xi1))
        {
            cout << "the value of roots are same!!" << endl;
                return;
        }
        else
            xi2 = xi1 - (func(xi1)* (xi0 - xi1)) / (func(xi0) - func(xi1));

        if(xi2 != 0)
            ea = abs(1 - xro / xi2) * 100;
        else
        {
            cout << "the root is now zero" << endl;
        }

        cout << xi2 << " " <<ea << endl;
        xi0 = xi1;
        xi1 = xi2;

    }

}
float secant::func(float x)
{
    return pow(x,4) * x4 + pow(x, 3) * x3 + pow(x,2) * x2 + x * x1 + x0;
}
float secant::value_error()
{
    return ea;
}
float secant::value_x()
{
    return xi2;
}

#include "bisection.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bisection::bisection()
{
}
void bisection::work()
{




    cout << "input the value of x4, x3, x2, x1, x0 respectively" << endl;

    cin >> x4 >> x3 >> x2 >> x1 >> x0;
    cnt = 0;

    while(1)
    {

        cout << "give xu and xl" << endl;
        cin >> xu >> xl;
        if(func(xl) > 0 || func(xu) < 0)
        {
            cout << "cant calculate root of this equation between these boundaries." << endl;
            if(cnt++ >= 5)
                return;
        }

        else
            break;
    }



    cout << "give error percentage" << endl;
    cin >> es;

    ea = 9999;

    xr = 0;


    while (ea > es)
    {
        xro = xr;
        xr = (xl + xu) / 2;
        if(func(xr) * func(xl) < 0)
            xu = xr;
        else if(func(xr) * func(xl) == 0)
        {
            cout << "the root is " << xr << endl;
            break;
        }
        else if(func(xr) * func(xl) > 0)
            xl = xr;

        ea = abs(1 - xro / xr) * 100;

        cout << xl << " " << xu << " " <<ea << endl;

    }
}

bisection::~bisection()
{
    //dtor
}
float bisection::func(float x)
{
    return pow(x,4) * x4 + pow(x, 3) * x3 + pow(x,2) * x2 + x * x1 + x0;
}
float bisection::value_x()
{
    return xr;
}
float bisection::value_error()
{
    return ea;
}


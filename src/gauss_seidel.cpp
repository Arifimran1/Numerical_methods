#include "gauss_seidel.h"
#include <bits/stdc++.h>

using namespace std;

gauss_seidel::gauss_seidel()
{
    //ctor
}

gauss_seidel::~gauss_seidel()
{
    //dtor
}

void gauss_seidel::work()
{

    cout << "enter the number of unknown roots: " << endl;
    cin >> n;


    ///input
    cout << "enter equations coeffiecient respectively" << endl;
    for( i = 1; i <= n; i++)
    {
        for( j = 1; j <= n; j++)
            cin >> a[i][j];
        cin >> b[i];
        x[i] = 0;
    }

    ea = 9999;
    cout << "enter the error: " << endl;
    cin >> es;

    it = 1;
    while(es < ea)
    {
        cout << "iteration " << it++ << ": " << endl;
        ea = 0;
        for(i = 1; i <= n; i++)
        {
            temp = 0;
            for (j = 1; j <= n ; j++)
            {
                if(j != i)
                {
                    temp += a[i][j] * x[j];
                }
            }
            xo = x[i];
            x[i] = (b[i] - temp) / a[i][i];

            eo = abs(1 - xo / x[i]) * 100;
            if(ea < eo)
                ea = eo;

            cout << "x" << i << ": " << x[i] << " error = " << eo << endl;
        }
        cout << endl;

        if(it >= 100)
            break;

    }

}

float gauss_seidel::value_x(int a)
{
    return x[a];
}
float gauss_seidel::value_error()
{
    return ea;
}

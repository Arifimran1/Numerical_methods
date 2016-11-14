#include "newton_polinomial.h"

#include <bits/stdc++.h>

using namespace std;


newton_polinomial::newton_polinomial()
{
    //ctor
}

newton_polinomial::~newton_polinomial()
{
    //dtor
}
void newton_polinomial::work()
{

    cout << "how much degree polynomial? " << endl;
    cin >> n;

    for(i = 0; i <= n; i++)
    {
        cout << "x(" << i << ") f(x(" << i << ")): " ;
        cin >> x[i] >> a[0][i];
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 0; j <= n-i; j++)
        {
            a[i][j] = (a[i-1][j+1] - a[i-1][j]) / (x[i+j] - x[j]);
        }
    }


    cout << "result " << endl;

    for(i = 0; i <= n; i++)
        cout << "b(" << i << ") = "<< a[i][0] << endl;


    cout << "The desired equation is: " << endl;
    cout << "f(x) = " ;
    for(i = 0; i <= n; i++)
    {
        cout << "+ ("<< a[i][0] << ") ";
        for(j = 0; j < i; j++)
        {
            cout << "* (x - " << x[j] << ") ";
        }
    }
    cout <<  endl;


    cout << "would you like to give the value of x?(y/n): " ;
    cin >> ch;

    if(ch == 'y' || ch == 'Y')
    {
        cout << "enter the value of x: ";
        cin >> x1;
        result = 0;
        for(i = 0; i <= n; i++)
        {
            sum = a[i][0];
            for(j = 0; j < i; j++)
            {
                sum *= (x1 - x[j]);
            }
            result += sum;
        }

        cout << "f(" << x1 << ") =  " << result << endl;

    }
}
float newton_polinomial::value_fx()
{
    return result;
}
float newton_polinomial::value_coefficient(int i)
{
    return a[i][0];
}
float newton_polinomial::value_x(int a)
{
    return x[a];
}

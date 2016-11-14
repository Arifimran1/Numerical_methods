#ifndef NEWTON_POLINOMIAL_H
#define NEWTON_POLINOMIAL_H


class newton_polinomial
{
    public:
        newton_polinomial();
        virtual ~newton_polinomial();
        void work();
        float value_fx();
        float value_coefficient(int i);
        float value_x(int a);
    protected:
    private:
        double a[100][100], x[100], x1, sum, result;
        int n, i, j;
        char ch;
};

#endif // NEWTON_POLINOMIAL_H

#ifndef GAUSS_SEIDEL_H
#define GAUSS_SEIDEL_H


class gauss_seidel
{
    public:
        gauss_seidel();
        virtual ~gauss_seidel();
        void work();
        float value_x(int a);
        float value_error();
    protected:
    private:
        int n, i, j, it;
        float x[100], b[100], a[100][100], temp, xo;
        float es, ea, eo;
};

#endif // GAUSS_SEIDEL_H

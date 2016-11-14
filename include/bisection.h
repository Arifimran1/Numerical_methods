#ifndef BISECTION_H
#define BISECTION_H


class bisection
{
    public:
        bisection();
        bisection(int a, int b, int c);
        void work();
        virtual ~bisection();
        float func(float x);
        float value_x();
        float value_error();
    protected:

    private:
        float xu, xl, es;
        float xr, ea;
        float x4, x3, x2, x1, x0;
        char ch;
        int cnt;
        float xro;

};

#endif // BISECTION_H

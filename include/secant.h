#ifndef SECANT_H
#define SECANT_H


class secant
{
    public:
        secant();
        virtual ~secant();
        void work();
        float func(float x);
        float value_error();
        float value_x();
    protected:
    private:
        float x4, x3, x2, x1, x0;
        float xi0, xi1, es, xi2, ea;
        int it;
        float xro;
};

#endif // SECANT_H

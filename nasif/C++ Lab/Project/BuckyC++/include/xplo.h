#ifndef XPLO_H
#define XPLO_H


class xplo
    {
        int a;

    public:
        void write_a(int n);
        int read_a();
    };

    void xplo::write_a(int n)
    {
        a=n;
    }

    int xplo::read_a()
    {
        return a;
    }


#endif // XPLO_H

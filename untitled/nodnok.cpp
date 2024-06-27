#include "nodnok.h"

nodnok::nodnok()
{
    a=1;
    b=1;
    ap=a;
    bp=b;
}
nodnok::nodnok(unsigned int a1,unsigned int b1)
{
    a=a1;
    b=b1;
    ap=a;
    bp=b;
}
unsigned nodnok::NOD()
{
    if(ap>=1&&bp>=1)
    {
        ap%=bp;
        if(!ap)
        {
            return bp;
        }
        bp%=ap;
        return this->NOD();
    }
    unsigned nod = ap+bp;
    ap=a;
    bp=b;
    return nod;
}

unsigned long long nodnok::NOK()
{
    if(a==0||b==0)
    {
        return 0;
    }
    return (long long)a/this->NOD()*b;
}
void nodnok::geta(unsigned a1)
{
    a=a1;
    ap=a;
}
void nodnok::getb(unsigned b1)
{
    b=b1;
    bp=b;
}
void nodnok::getab(unsigned a1, unsigned b1)
{
    a=a1;
    ap=a;
    b=b1;
    bp=b;
}
nodnok::~nodnok()
{}

#include <QtTest>
#include "../untitled/nodnok.h"
// add necessary includes here

class t1 : public QObject
{
    Q_OBJECT

public:
 //   t1();
   // ~t1();

private slots:
    void test_case1();
    void test_case2();
};

//t1::t1() {}

//t1::~t1() {}

void t1::test_case1() {
    nodnok t[6];
    t[0].getab(0,0);
    t[1].getab(0,16);
    t[2].getab(16,0);
    t[3].getab(2147483647,352);
    t[4].getab(2147483647,2147483647);
    t[5].getab(5,12312645);
    QCOMPARE(t[0].NOD(),0);
    QCOMPARE(t[1].NOD(),16);
    QCOMPARE(t[2].NOD(),16);
    QCOMPARE(t[3].NOD(),1);
    QCOMPARE(t[4].NOD(),2147483647);
    QCOMPARE(t[5].NOD(),5);
}
void t1::test_case2() {
    nodnok t[6];
    t[0].getab(0,0);
    t[1].getab(0,16);
    t[2].getab(16,0);
    t[3].getab(2147483647,352);
    t[4].getab(2147483647,2147483647);
    t[5].getab(5,12312645);
    QCOMPARE(t[0].NOK(),0);
    QCOMPARE(t[1].NOK(),0);
    QCOMPARE(t[2].NOK(),0);
    QCOMPARE(t[3].NOK(),755914243744);
    QCOMPARE(t[4].NOK(),2147483647);
    QCOMPARE(t[5].NOK(),12312645);
}
QTEST_APPLESS_MAIN(t1)

#include "tst_t1.moc"

#include <QTest>

class untest: public QObject
{
    Q_OBJECT
private slots:
    void toUpper();
};

void untest::toUpper()
{
    QString str = "Hello";
    QCOMPARE(str.toUpper(), QString("HELLO"));
}

QTEST_MAIN(untest)

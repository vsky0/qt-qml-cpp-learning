#include <QCoreApplication>
#include <QDebug>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // varaibles
    bool onOff = false;
    qInfo() << "onOff:" << onOff;

    // data types
    int age = 45;
    float weight = 45.3;
    // double height = 100000000000000000000000000000000000000000000000000000000;

    qInfo() << "age: " << age;
    qInfo() << "weight" << weight;
    // qInfo() << "height" << height;
    signed int x = -56;
    qInfo() << "x: " << x;
    unsigned int x1 = -34; // giving some random memory.
    qInfo() << "x1:" << x1;
    qInfo() << "size of the x1: " << sizeof(x1);

    qInfo() << "size of the age: " << sizeof(age);
    qInfo() << "size of the weight: " << sizeof(weight);

    // constants are that wont change.

    const int meetingTime = 60;
    const int id = 1000;

    // cannot assign the value constants
    const int id1 = 1000;

    qInfo() << meetingTime;



    // void x = "vsky";




    return a.exec();
}

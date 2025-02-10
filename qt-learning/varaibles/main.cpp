#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

enum Colors {black, red, wight};

struct Product
{
    int weight;
    double value;
    Colors color;

};

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

    qInfo() << "ENUM";
    // ENUMS: need to represent set of data.
    int v = 0;
    int y = 1;
    int z = 2;
    int e = 3;
    // qInfo()  << x << y << z << e;

    enum Color {red=0, green=1, blue=2};
    Color color1 = Color::blue;
    Color color2 = Color::red;
    Color color3 = Color::green;

    qInfo() << color1;

    // struct
    // std::cout << "Structures";

    Product phone;
    phone.weight = 7;
    phone.value = 4000;
    phone.color = Colors::black;

    qInfo() << "phone color " << phone.color;
    qInfo() << "phone value " << phone.value;
    qInfo() << "phone weight " << phone.weight;
    qInfo() << "size of " << sizeof(phone);



    return a.exec();
}

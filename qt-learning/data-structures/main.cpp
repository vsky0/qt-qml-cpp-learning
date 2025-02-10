#include <QCoreApplication>
#include <QTimer>

#include <iostream>
#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Data structures"<<std::endl;

    QTimer::singleShot(10000, &a, &QCoreApplication::quit);

    //ARRAYS
    int arr[5] = {100, 200, 300, 400, 500};

    qInfo() << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

    std::cout << "ages:"<< std::endl;
    qInfo() << arr; // gives the memory address start address of the array.

    std::cout << "can create the array using the standard library" << std::endl;
    array<int, 10> arr1;
    arr1[0] = 500;
    arr1[1] = 400;
    arr1[2] = 300;
    arr1[3] = 200;
    arr1[4] = 100;

    std::cout << "size  arr1: " << size(arr1) << std::endl;
    std::cout << "sizeof arr1: " << sizeof(arr1) << std::endl;
    // std::cout << arr1 << std::endl;

    for (int element: arr1)
    {
        std::cout <<element << " ";
    }
    std::cout << std::endl;


    // airthmetic operators

    int age1;
    std::cout << "age before the assignment: " << age1 << std::endl;
    age1 = 40;
    std::cout << "age after assignment: " << age1 << std::endl;

    std::cout << "age after increament: " << ++age1 << std::endl;

    // assignment operators

    age1 += 45;
    std::cout << "age after the increment by 45: " << age1 << std::endl;


    // comparision operators
    std::cout << "is age equlal to 100: " << (age1==100) << std::endl;

    qInfo() << (age1==100);

    int x = 100;
    int y = 200;

    qInfo() << "x==y" << (x==y);
    qInfo() << "x>=y: " << (x>=y);
    qInfo() << "x<=y: " << (x<=y);
    qInfo() << "x>y: " << (x>y);
    qInfo() << "x<y: " << (x<y);


    // qInfo() << "x=: " << x;
    // qInfo() << "y=: " << y;


    return a.exec();
}

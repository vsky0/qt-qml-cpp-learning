#include <QCoreApplication>
#include <QTimer>

#include <iostream>
// using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "Data structures"<<std::endl;

    QTimer::singleShot(10000, &a, &QCoreApplication::quit);
    return a.exec();
}

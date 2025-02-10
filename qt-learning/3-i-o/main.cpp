#include <QCoreApplication>
#include <QDebug>

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*out << "Input and Output: " << endl;

    qInfo() << "Input and Output the Qt way";

    int age = 100;

    cout << "age: " << age << endl;
    cout << "your age is 100" << "just die" << endl;

    // cin

    cout << "INPUT" << endl;
    int ageAfter20;

    cout << "Input your age after  20 years: ";
    cin >> ageAfter20;
    // cout << "Age after 20 :" << ageAfter20 << endl;
    qInfo() << "age after 20" << ageAfter20;*/

    int age;
    // ''
    qInfo() << "Enter your age: ";
    cin >> age;
    qInfo() << "age " << age;
    // qDebug() << "age: " << age;
    // cout.flush();

    // cerror
    cout << "hello standard out" << endl;
    cerr << "standardar derror" << endl; // outputs the string in red string. ouptu is end of the all the outputs.

    // qdebug
    int age1 = 300;
    qInfo() << "Enter your age: ";
    cin >> age1;

    qInfo() << "you are " << age1 << "years old";
    qDebug() << "Debug";
    qCritical() << "Critical";
    qWarning() << "this is warning";
    qFatal() << "Fatal goodbye to the laptop"; // closes the application.

    return a.exec();
}

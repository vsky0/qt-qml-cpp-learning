#include <QCoreApplication>
#include <QDebug>

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 23;
    qInfo() << "Age is " << age;


    // if else, else if
    if (age > 25) {
        qInfo() << "Your are an adult";
    }

    else if ((age > 18) && (age < 25)) {
            qInfo() << "you are between";
        }

    else {
        qInfo() << "you are not an adult";
    }

    // ternary operator
    age > 100 ? qFatal() << "not possible" : qInfo() << " great";

    // switch statment
    qInfo() << "\nSWITCH STATEMENT\n";

    switch(age) {
    case 0:
        qFatal() << "Good bye";
        break;
    case 20:
        qInfo() << "completed high school";
        break;
    case 23:
        qInfo() << "completed the degree";
        break;
    case 50:
        qInfo() << "Hello ossa";
        break;
    default:
        qInfo() << "default";
        break;
    }


    // loops
    qInfo() << "\n LOOPS \n";

    int start = 0;
    int end = 12;


    // while(start == end) {
    //     end--;
    //     qInfo() << "start" << start << "end" << end;   }

    qInfo()<< "---------------------------------------------------";
    // do while loop
    int i = start;
    do {
        qInfo() << "Do = " << i;
        i++;
    } while (i<end);

    qInfo()<< "---------------------------------------------------";
    // for looop
    for (int i=0; i<=end; i++) {
        qInfo() << i;
    }

    qInfo()<< "---------------------------------------------------";
    qInfo() << "\n AGE CALCULATOR \n";
    qInfo()<< "---------------------------------------------------";

    int yourAge = 304;
    // qInfo() << "Enter ur age: ";
    // cin >> yourAge;

    if (yourAge > 1 && yourAge <100) {
        qInfo() << "proceed";
    }
    else {
        qFatal() << "entry restricted";
    }








































    return a.exec();
}

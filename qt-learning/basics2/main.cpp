#include <QCoreApplication>
#include <QDebug>
// #include <iostream>

void funcOne() {
    qInfo() << "First functon";
}

void funcTwo() {
    qInfo() << "Second function";
}


void functionWithParameters(std::string name, int age) {
    qInfo() << "your are " << name << "and " << age << "years old";
}

float functionWithReturnType(int x, int y) {
    return x/y;
}

// function overloading
void test() {
    qInfo() << "test function 1";
}

void test(int funcNumber) {
    qInfo() << "test function" << funcNumber;
}

void test(std::string name) {
    qInfo() << "test function 3" << name;
}

// pass by reference and value functions.

void testFunc(int x) {
    x += 1000;
    qInfo() << "x value is " << x;
}

// pass by reference

void tesRef(int &y) {
    y += 100;
    qInfo() << "y value is " << y;
}

// function inside of the structures

struct Lappy {
    int processor;
    int screenSize;
    int cores;

    int getThreads(int cores) {
        return cores*2;
    }
};

void funcInsideStruct() {
    qInfo() << "functon in struct";
}

// QObject getObj(QString name) {
//     QObject obj;
//     obj.setObjectName(name);
//     // this is the copy of QObject, but qobject can't be copied.
//     return obj;
// }

// accessing object with reference which don't work because obj is deleted.
QObject& getObjByRef(QString name) {
    // this will create the object in stack, which will deleted, making it unaccessable
    QObject obj;
    obj.setObjectName(name);
    return obj; // this obj is deleted by the c++ already, before calling the function.
}

// creating using the pointer, solution to above getObjByRef solution.
QObject* getObjByPtr(QString name) {
    // this will be create the object in heap, which will be available to accessable.
    QObject *obj = new QObject();
    obj -> setObjectName(name);
    return obj; // this object will not be deleted.
}



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    for (int i =1; i<=2; i++) {
        funcOne();
        funcTwo();
    }

    // function with parameters
    functionWithParameters("sai", 24);

    // function with return statement
    qInfo() << functionWithReturnType(50,25);

    // function overloading
    test(2);
    test();
    test("sai");

    // pass by value
    int x = 500;
    qInfo() << "x= " << x;
    qInfo() << "after function x= ";
    testFunc(x);
    qInfo() << "x= "  << "after the function " << x;

    qInfo() << "------------------------------------------";
    int y = 0;
    qInfo() << "before testRef" << y;
    tesRef(y);
    qInfo() << "after testRef" << y;

    // function inside the struct
    qInfo() << "-------------------------------------------";
    Lappy ideapad;
    ideapad.cores = 2;
    ideapad.processor = 5000;
    ideapad.screenSize = 1000;

    qInfo() << "number of cores" << ideapad.getThreads(2);

    qInfo() << "-----------------------------------------------";
    qInfo() << "A pointer in C++ is a variable that holds the memory address of another variable";
    qInfo() << "-----------------------------------------------";
    qInfo() << "A reference is an alias for an already existing variable";
    qInfo() << "A reference is initialized to a variable, it cannot be changed to refer to another variable, same as const pointer";

    // QObject obj = getObjByRef("sai");

    QObject *obj = getObjByPtr("by pointer");
    // print the object name
    qInfo() << obj->objectName();
    qInfo() <<  obj;

    delete obj; // manually delete the obj, where this obj is created in heap which wil be
    // not be deleted after closing application.
    return a.exec();
}

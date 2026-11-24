#include<QtWidget>

#include<iostream>

int main(int argc, char *argc[])
{

    QApplication app(argc,argv);//need to read syntax of QApplication

    QWidget Window;

    window.setWindowTitle("first");

    window.resize(400,400);

    window.show();

    return app.exec;

}
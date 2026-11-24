#include<iostream>
#include <QtWidgets>

int main(int argc,char* argv[])
{
    QApplication app(argc,argv);

    QWidget W;
    W.setWindowTitle("Basic");
    W.resize(400,300);

    QPushButton button("hello");
    QPushButton button2("hye");
    button.show();
    button2.show();  

    QVBoxLayout lay(&W);

  

    lay.addWidget(&button);
    lay.addWidget(&button2);

    W.show();

    return app.exec();
}
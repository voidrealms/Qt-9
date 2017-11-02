// QT Tutorial
// http://www.voidrealms.com
// https://www.youtube.com/watch?v=6KtOzh0StTc&list=PL7C604D492F9E0E0B

#include <QApplication>
#include <QtGui>
#include <QTCore>

// Note: for Qt5, you need to add this
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget *window = new QWidget;
    window->setWindowTitle("My App");

    QGridLayout *layout = new QGridLayout;

    // ROW 1
    QLabel *label1 = new QLabel("Name");
    QLineEdit *txtName = new QLineEdit;
    layout->addWidget(label1,0,0);
    layout->addWidget(txtName,0,1);

    // ROW 2
    QLabel *label2 = new QLabel("Name");
    QLineEdit *txtName2 = new QLineEdit;
    layout->addWidget(label2,1,0);
    layout->addWidget(txtName2,1,1);

    // ROW 3
    QPushButton *button = new QPushButton("OK");
    layout->addWidget(button,2,0,1,2);

    window->setLayout(layout);

    window->show();
    return app.exec();
}

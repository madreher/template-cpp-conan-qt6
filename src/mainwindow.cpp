#include <mainwindow.hpp>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    label = new QLabel(this);
    label->setText("Hello World!");
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);
}

MainWindow::~MainWindow()
{
}
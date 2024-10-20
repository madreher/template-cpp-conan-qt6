#include <mainwindow.hpp>
#include <QApplication>

#include <spdlog/spdlog.h>

int main(int argc, char *argv[])
{
    spdlog::set_level(spdlog::level::info);
    spdlog::info("Starting Mainwindow.");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
// Qt lib import
#include <QCoreApplication>
#include <QDebug>

// JQLibrary lib mport
#include <JQCPUMonitor>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    JQCPUMonitor::initialize();

    forever
    {
        qDebug() << "\nCPU(Now):" << JQCPUMonitor::cpuUsagePercentage();
        qDebug() << "CPU(5S):" << JQCPUMonitor::cpuUsagePercentageIn5Second();
        qDebug() << "CPU(30S):" << JQCPUMonitor::cpuUsagePercentageIn30Second();

        QThread::msleep( 500 );
    }

    return a.exec();
}

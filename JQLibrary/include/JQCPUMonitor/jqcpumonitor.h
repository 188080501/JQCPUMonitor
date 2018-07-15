#ifndef JQLIBRARY_INCLUDE_JQCPUMONITOR_H_
#define JQLIBRARY_INCLUDE_JQCPUMONITOR_H_

// Qt lib import
#include <QObject>
#include <QDateTime>
#include <QMutex>
#include <QThread>
#include <QPointer>

class JQCPUMonitor: public QThread
{
    Q_OBJECT
    Q_DISABLE_COPY( JQCPUMonitor )

private:
    JQCPUMonitor() = default;

public:
    ~JQCPUMonitor() = default;

public:
    static void initialize();

    static qreal cpuUsagePercentage();

    static qreal cpuUsagePercentageIn5Second();

    static qreal cpuUsagePercentageIn30Second();

private:
    void run();

    static void tick();

private:
    static QPointer< JQCPUMonitor > cpuMonitor_;
    static bool continueFlag_;

    static QMutex mutex_;
    static QList< QPair< qint64, qreal > > cpuUsagePercentageRecords_; // [ { time, percentage }, ... ]
};

// .inc include
#include "jqcpumonitor.inc"

#endif//JQLIBRARY_INCLUDE_JQCPUMONITOR_H_

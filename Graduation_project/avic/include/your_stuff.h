#ifndef YOUR_STUFF_H
#define YOUR_STUFF_H
#include "can_opener.h"
#include "cluster_updater.h"

const uint OFF_ENGINE_NULL = 0;
const uint FUEL_GAUGE = 200;
const uint TEMPERATURE_GAUGE = 100;
const uint OIL_TEMPERATURE_GAUGE = 100;

class yourStuff : public QObject {
    Q_OBJECT
public:
    yourStuff() = delete;
    yourStuff(const std::string &_ifName, QObject *_);

private:
    bool run();
    void YouHaveJustRecievedACANFrame(const canfd_frame * const _frame);    
    void timerEvent(QTimerEvent*) override;

//signals:
//    void die();

private:
    size_t Counter;
    CANOpener CANReader;
    ClusterUpdater InstrumentCluster;

};

#endif // YOUR_STUFF_H

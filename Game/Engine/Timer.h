#ifndef PORJECT2121_TIMER_H
#define PORJECT2121_TIMER_H
#include<thread>
#include<atomic>

class Timer {
private:
    std::atomic<float> m_time{0.0};
    std::atomic<bool> m_running{false};
public:
    Timer(float time);

    void Start();

    void setTime(float time);

    bool isRunning();
};


#endif //PORJECT2121_TIMER_H

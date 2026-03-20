#include <iostream>
#include <thread>
#include <chrono>

class Worker
{
public:

    void startTask()
    {
        std::thread t([this]()
        {
            std::this_thread::sleep_for(std::chrono::seconds(2));

            std::cout << "Task running\n";
            doWork();
        });

        t.detach();
    }

    void doWork()
    {
        std::cout << "Worker doing work\n";
    }

    ~Worker()
    {
        std::cout << "Worker destroyed\n";
    }
};

int main()
{
    {
        Worker w;
        w.startTask();
    } // Worker destroyed here

    std::this_thread::sleep_for(std::chrono::seconds(3));

    return 0;
}
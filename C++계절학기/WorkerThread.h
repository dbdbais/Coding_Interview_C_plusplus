//
// Created by newbi on 2023-07-04.
//

#ifndef SUMMER_WORKERTHREAD_H
#define SUMMER_WORKERTHREAD_H


#include <mutex>
#include "SharedPreferences.h"

class WorkerThread {
public:
    void play();
private:
    void readWorker();
    void writeWorker(int value);
    std::mutex mu;
    std::vector<SharedPreferences*> answers;
};


#endif //SUMMER_WORKERTHREAD_H

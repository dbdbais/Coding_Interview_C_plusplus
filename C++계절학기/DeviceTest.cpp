//
// Created by newbi on 2023-07-19.
//
#include "OutputDevice.h"
#include"LCD_Monitor.h"
#include "LED_Monitor.h"
#include "Monitor.h"
#include "Printer.h"
#include <memory>
int main() {
    {
        Monitor monitor;
        //monitor.print();
    }
    std::cout << "--------------------------" << std::endl;
    {
        Monitor* pMonitor = new LED_Monitor();
        if (pMonitor) delete pMonitor;
    }
    std::cout << "--------------------------" << std::endl;
    {
        std::unique_ptr<OutputDevice> pMonitor = std::make_unique<LCD_Monitor>();
    }
}
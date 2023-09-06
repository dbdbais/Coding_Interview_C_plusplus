#include "Logger.h"
#include<iostream>
int Logger::logLevel = 1;


void Logger::setLogLevel(int level) {
    Logger::logLevel = level;
}


void Logger::debug(std::string st, std::string tag) {
    if(Logger::logLevel <= DEBUG)
    cout << "[DEBUG]"<<"["<< tag<<"] "<<st<<endl;
}
void Logger::error(std::string st, std::string tag) {
    if(Logger::logLevel <= ERROR)
    cout << "[ERROR]"<<"["<< tag<<"] "<<st<<endl;
}

void Logger::info(std::string st, std::string tag) {
    if(Logger::logLevel <= INFO)
    cout << "[INFO]"<<"["<< tag<<"] "<<st<<endl;
}

void Logger::warning(std::string st, std::string tag) {
    if(Logger::logLevel <= WARNING)
    cout << "[WARNING]"<<"["<< tag<<"] "<<st<<endl;
}



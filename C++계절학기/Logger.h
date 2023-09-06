
#ifndef SUMMER_LOGGER_H
#define SUMMER_LOGGER_H
#include <string>

using namespace std;
enum LogLevel {
    DEBUG = 0,
    INFO = 1,
    WARNING = 2,
    ERROR = 3
};

class Logger {
public:
    static void setLogLevel(int level);
    static void debug(string st,string tag);
    static void info(string st, string tag);
    static void warning(string st, string tag);
    static void error(string st, string tag);
private:
    static int logLevel;
};


#endif //SUMMER_LOGGER_H

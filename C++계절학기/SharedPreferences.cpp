#include "SharedPreferences.h"

size_t SharedPreferences::size() {
    return this->preferences.size();
}

SharedPreferences& SharedPreferences::getInstance() {
    static SharedPreferences s;
    return s;
}

int SharedPreferences::getInt(std::string key) {
    return this->preferences[key];
}

void SharedPreferences::putInt(std::string key, int value) {
    this->preferences.insert(std::make_pair(key,value));
}


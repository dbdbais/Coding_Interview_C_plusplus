#ifndef SUMMER_SHAREDPREFERENCES_H
#define SUMMER_SHAREDPREFERENCES_H
#include<map>
#include<string>
#include<vector>

class SharedPreferences;
class SharedPreferences {
private:
    std::map<std::string, int> preferences;
    SharedPreferences()= default;
    ~SharedPreferences()= default;
    SharedPreferences(const SharedPreferences&)= delete;
    SharedPreferences& operator=(const SharedPreferences&)= delete;
    friend class std::vector<SharedPreferences*>;
public:
    static SharedPreferences& getInstance();
    void putInt(std::string key, int value);
    int getInt(std::string key);
    size_t size();
};


#endif //SUMMER_SHAREDPREFERENCES_H

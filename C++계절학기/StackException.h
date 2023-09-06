#ifndef EXCEPTION_STACKEXCEPTION_H

#define EXCEPTION_STACKEXCEPTION_H
#include <stdexcept>
#include <string>
#include <sstream>
//str_const _std_string _msg _const_char_file_size_t_lint_std_msg
class StackException : public std::runtime_error {

public:

    StackException(const std::string& msg, const char *file, size_t line): std::runtime_error(msg) {
        _msg=msg;
        _file_name = file;
        _line= line;
        std::stringstream ss;

        ss  << file << ":" << line << ":" << "Exception: " << msg << std::endl;

        _msg = ss.str();

    }

    ~StackException() noexcept {}

    const char* what() const noexcept {
        return _msg.c_str();
    }
private:
    std::string _msg;
    std::string _file_name;
    size_t _line = 0;


};

#endif //EXCEPTION_STACKEXCEPTION_H
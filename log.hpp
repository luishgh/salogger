#ifndef SALOG_HPP
#define SALOG_HPP

#define ERROR "ERROR"
#define WARN "WARN"
#define INFO "INFO"

#define SALOGSTRING0(x) #x
#define SALOGSTRING1(x) SALOGSTRING0(x)
#define AT __FILE__ ":" SALOGSTRING1(__LINE__)

#ifndef DONT_LOG
#define LOG(mode, info)\
    Serial.println(String("[" mode "][" AT "]: ") + info)
#else

#define LOG(mode, info)

#endif//DONT_LOG
#endif//SALOG_HPP
#ifndef SALOG_HPP
#define SALOG_HPP

#define ERROR "ERROR"
#define WARN "WARN"
#define INFO "INFO"

#define SALOGSTRING0(x) #x
#define SALOGSTRING1(x) SALOGSTRING0(x)
#define AT __FILE__ ":" SALOGSTRING1(__LINE__)

#ifndef DONT_LOG
/*!
  @brief Logs the message to the serial together with the mode and the current file and line
  @param mode Defines the mode of the log. You can use the default values provided by the lib: (ERROR, WARN and INFO) or pass a string to use a custom mode
  @param info The actual message to be logged
*/
#define LOG(mode, message)\
  Serial.println(String("[" mode "][" AT "]: ") + message)
#else

#define LOG(mode, message)

#endif//DONT_LOG
#endif//SALOG_HPP
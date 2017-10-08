//
// Created by fedelonghi on 07/10/17.
//

#ifndef CONCURRENTES_P1_LOGGER_H
#define CONCURRENTES_P1_LOGGER_H

#include <string>
#include <sstream>
#define LOG_MODES 3

typedef enum Logmode{
    DEBUG,
    ERROR,
    INFO,
} LOG_MODE;

class Logger
{
public:
    virtual ~Logger();

    void setLogPath(std::string path) { log_path = path; }
    static Logger* getInstance();
    static std::string intToString ( int number );
    static void log(std::string name, std::string comment, LOG_MODE mode);
    static void setMode(LOG_MODE mode);

    static std::string doubleToString ( double number );


private:

    Logger();
    void _log(std::string name, std::string comment, LOG_MODE mode);
    void log_timestamp();
    std::string timeHMSmu();


    Logger* instancia;

    std::string log_path;
    std::string mode_symbols[LOG_MODES];
    LOG_MODE mode;

};

#endif //CONCURRENTES_P1_LOGGER_H

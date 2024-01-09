#ifndef LECTURES_ECHO_APPLICATION_H
#define LECTURES_ECHO_APPLICATION_H

#include <iostream>

class EchoApplication {

    std::istream& _cin;
    std::ostream& _cout;

public:
    explicit EchoApplication(std::istream& in, std::ostream& out);
    void run();

};

#endif //LECTURES_ECHO_APPLICATION_H

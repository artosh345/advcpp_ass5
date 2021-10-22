//
// Created by ACER on 22.10.2021.
//

#ifndef UNTITLED3_ENVIRONMENT_H
#define UNTITLED3_ENVIRONMENT_H
#include <iostream>
using namespace std;

class Environment {
private:
    char desk[3][3];
    int step=0;
public:
    Environment();
    void setPoint(int p);
    void Show();
    int Check();
};


#endif //UNTITLED3_ENVIRONMENT_H

//
// Created by ACER on 23.10.2021.
//

#include "Bot.h"
void Bot::SetX() {
    a=rand()%3;
}
void Bot::SetY() {
    b=rand()%3;
}
int Bot::getX() {
    return a;
}
int Bot::getY() {
    return b;
}
#include <iostream>
#include <istream>
#include "Environment.h"
int main() {
    Environment environment;
    environment.Show();
    environment.setPoint(1);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }


    environment.setPoint(2);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }


    environment.setPoint(1);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }


    environment.setPoint(2);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }


    environment.setPoint(1);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }


    environment.setPoint(2);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }
    environment.setPoint(1);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }


    environment.setPoint(2);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }


    environment.setPoint(1);
    environment.Show();
    environment.Check();
    if(environment.Check()==0){
        return 0;
    }
}

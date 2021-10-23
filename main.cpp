#include <iostream>
#include <istream>
#include "Environment.h"
#include "Bot.h"
void pvp(Environment environment){
    int i=0;
    int b=1;
    int c;
    while(i==0){
        environment.setPoint(b%2);
        environment.Show();
        environment.Check();
        if(environment.Check()==0){
            i++;
            if(environment.step%2==0){
                cout<<"player 2 wins!!!";
            }
            else{
                cout<<"player 1 wins!!!";
            }
        }
        b++;
        if(b==10){
            i++;
            cout<<"Draw";
        }
    }
}


void pvc(Environment environment){
    Bot bot;
    int i=0;
    int b=1;
    while(i==0){
        environment.setPoint(1);
        environment.Show();
        environment.Check();
        if(environment.Check()==0){
            i++;
        }
        do{
            bot.SetX();
            bot.SetY();}
        while
            (environment.desk[bot.getX()][bot.getY()]!='_');
        environment.desk[bot.getX()][bot.getY()]='o';
        environment.Show();
        environment.Check();
        if(environment.Check()==0){
            i++;
            if(environment.step%2==0){
                cout<<"Bot wins(((";
            }
            else{
                cout<<"you won!!!";
            }
        }
        b++;
        if(b==10){
            i++;
            cout<<"Draw";
        }
    }
}






int main() {

    Environment environment;
    environment.Show();
    cout<<"Main menu:"<<endl<<"1.PvP"<<endl<<"2.PvC";
    int a;
    cin>>a;
    switch (a) {
        case 1:{
            pvp(environment);
            break;
        }
        case 2:{
            pvc(environment);
        }
    }



    /*environment.setPoint(1);
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
    }*/

}

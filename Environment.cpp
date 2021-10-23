//
// Created by ACER on 22.10.2021.
//

#include "Environment.h"

using namespace std;
Environment::Environment() {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            desk[i][j]='_';
        }
    }
}

void Environment::Show() {
    for(int i=0;i<3;i++){
        cout<<desk[i][0]<<"  | "<<desk[i][1]<<" | "<<desk[i][2]<<endl;
        cout<<"___|___|___"<<endl;
    }
}
void Environment::setPoint(int p) {
    //step++;
    int i=0;
    int a,b;
    while(i==0){
    cout<<"Enter the coordinates of the point:";

    cin>>a>>b;
        a--;
        b--;
    if(desk[a][b]=='_'){
    i=1;
    step++;
    }
    else i=0;
    }


    char t;
    if (p==1){
        t='x';
    }
    else{
        t='o';
    }
    desk[a][b]=t;
}
int Environment::Check() {
    if((desk[0][0]==desk[0][1]&&desk[0][1]==desk[0][2]&&desk[0][2]!='_') ||
        (desk[1][0]==desk[1][1]&&desk[1][1]  ==desk[1][2]&&desk[1][2]!='_') ||
        (desk[2][0]==desk[2][1]&&desk[2][1]  ==desk[2][2]&&desk[2][2]!='_') ||
            (desk[1][0]==desk[2][0]&&desk[2][0]  ==desk[0][0]&&desk[0][0]!='_') ||
            (desk[1][1]==desk[2][1]&&desk[2][1]  ==desk[3][1]&&desk[3][1]!='_') ||
            (desk[0][3]==desk[1][3]&&desk[1][3]  ==desk[2][3]&&desk[2][3]!='_') ||
                (desk[0][0]==desk[1][1]&&desk[1][1]  ==desk[2][2]&&desk[2][2]!='_') ||
                (desk[1][1]==desk[2][0]&&desk[2][0]  ==desk[0][2]&&desk[0][2]!='_')

            ){

        return 0;
    }
    return 1;
}


/*void Environment::Game() {
    cout<<"Main Menu:\n"
          "1.PvP;\n"
          "2.PvC;";
    int a;
    cin>>a;
    switch (a) {
        case 1:
        {

            break;
        }

    }
}*/
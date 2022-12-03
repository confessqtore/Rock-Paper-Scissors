#include <iostream>

#include <cmath>

#include <stdio.h>

#include <ctime>

using namespace std;

int main(){
    int mychoice, botchoice; 
    
    int myscore=0;
    
    int botscore=0;
    
    cout << "0 - 0" << endl;
    cout << "Goal to score 10 points" << endl;
    while(myscore<10 && botscore<10){
        srand(time(0));
        botchoice=rand()%3;
        cout << "Menu: \n0 Rock \n1 Paper \n2 Scissors"<< endl;
        cin >> mychoice;
        if(mychoice==0 && botchoice==0){
            cout << "Tie" << "\n" << myscore << " - " << botscore << endl;
        }else{
            if(mychoice==1 && botchoice==1){
                cout << "Tie" << "\n" << myscore << " - " << botscore << endl;
            }else{
                if(mychoice==2 && botchoice==2){
                    cout << "Tie" << "\n" << myscore << " - " << botscore << endl;
                }
            }
        }
        if(mychoice==0 && botchoice==2){
            myscore=myscore+1;
            cout << "Victory" << "\n" << myscore << " - " << botscore << endl;
        }else{
            if(mychoice==1 && botchoice==0){
                myscore=myscore+1;
                cout << "Victory" << "\n" << myscore << " - " << botscore << endl;
            }else{
                if(mychoice==2 && botchoice==1){
                    myscore=myscore+1;
                    cout << "Victory" << "\n" << myscore << " - " << botscore << endl;
                }
            }
        }
        if(mychoice==0 && botchoice==1){
            botscore=botscore+1;
            cout << "Defeat" << "\n" << myscore << " - " << botscore << endl;
        }else{
            if(mychoice==1 && botchoice==2){
                botscore=botscore+1;
                cout << "Defeat" << "\n" << myscore << " - " << botscore << endl;
            }else{
                if(mychoice==2 && botchoice==0){
                    botscore=botscore+1;
                    cout << "Defeat" << "\n" << myscore << " - " << botscore << endl;
                }
            }
        }
    }
    if(myscore==10){
        cout << "You Won!" << endl;
    }else{
        cout << "Game Over!" << endl;
    }
    return 0;
}

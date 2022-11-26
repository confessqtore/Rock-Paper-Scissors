#include <iostream>

#include <cmath>

#include <stdio.h>

#include <ctime>

using namespace std;

int main(){
    int sceltamia, sceltabot; 
    
    int punteggiomio=0;
    
    int punteggiobot=0;
    
    cout << "0 - 0" << endl;
    cout << "Obiettivo fare 10 punti" << endl;
    while(punteggiomio<10 && punteggiobot<10){
        srand(time(0));
        sceltabot=rand()%3;
        cout << "Menu: \n0 Sasso \n1 Carta \n2 Forbice"<< endl;
        cin >> sceltamia;
        if(sceltamia==0 && sceltabot==0){
            cout << "Pareggio" << "\n" << punteggiomio << " - " << punteggiobot << endl;
        }else{
            if(sceltamia==1 && sceltabot==1){
                cout << "Pareggio" << "\n" << punteggiomio << " - " << punteggiobot << endl;
            }else{
                if(sceltamia==2 && sceltabot==2){
                    cout << "Pareggio" << "\n" << punteggiomio << " - " << punteggiobot << endl;
                }
            }
        }
        if(sceltamia==0 && sceltabot==2){
            punteggiomio=punteggiomio+1;
            cout << "Vittoria" << "\n" << punteggiomio << " - " << punteggiobot << endl;
        }else{
            if(sceltamia==1 && sceltabot==0){
                punteggiomio=punteggiomio+1;
                cout << "Vittoria" << "\n" << punteggiomio << " - " << punteggiobot << endl;
            }else{
                if(sceltamia==2 && sceltabot==1){
                    punteggiomio=punteggiomio+1;
                    cout << "Vittoria" << "\n" << punteggiomio << " - " << punteggiobot << endl;
                }
            }
        }
        if(sceltamia==0 && sceltabot==1){
            punteggiobot=punteggiobot+1;
            cout << "Sconfitta" << "\n" << punteggiomio << " - " << punteggiobot << endl;
        }else{
            if(sceltamia==1 && sceltabot==2){
                punteggiobot=punteggiobot+1;
                cout << "Sconfitta" << "\n" << punteggiomio << " - " << punteggiobot << endl;
            }else{
                if(sceltamia==2 && sceltabot==0){
                    punteggiobot=punteggiobot+1;
                    cout << "Sconfitta" << "\n" << punteggiomio << " - " << punteggiobot << endl;
                }
            }
        }
    }
    if(punteggiomio==10){
        cout << "Hai vinto" << endl;
    }else{
        cout << "Hai perso" << endl;
    }
    return 0;
}

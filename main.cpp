#include <iostream>
#include<cstdlib>
#include<cstdio>
#include<time.h>
using namespace std;

#include "funciones.h"
#include "fun_juego.h"
#include "rlutil.h"

int main()
{
    ///
    string nombres[2], jugadorMaximo, ganadorEscalera, unJugador;
    int puntos[2]={0}, puntajeMaximo=0, puntosJuego=0;

        int opc =-1, y=0;

        rlutil::setBackgroundColor(rlutil::GREEN);
        rlutil::setColor(rlutil::BLACK);

    while(true){
        system("cls");
        rlutil::locate(30,10);
        cout << "*******MENU PRINCIPAL GENERAL*******" << endl;
        rlutil::locate(30,11);
        cout << "1. UN JUGADOR" << endl;
        rlutil::locate(30,12);
        cout << "2. DOS JUGADORES" << endl;
        rlutil::locate(30,13);
        cout << "3. PUNTUACION MAXIMA" << endl;
        rlutil::locate(30,14);
        cout << "0. FIN DEL PROGRAMA" << endl;
        rlutil::locate(30,15);
        cout << "****************************" << endl;
        rlutil::locate(30,16);
        cout << "SELECCIONAR OPCION " << endl;
        rlutil::locate(30,17);
        cout << "MODO SIMULADO (un jugador) " <<endl;

        rlutil::locate(28,10 + y);
        cout<< (char)175 <<endl;
        rlutil::hidecursor();

        switch (rlutil::getkey()){
    case 14: ///UP
        y--;
        if(y<0){
            y=0;
        }
        break;
    case 15: ///DOWN
        y++;
        if(y>4){
            y=7;
        }
        break;

                    case 1: ///ENTER

                    switch(y){
                            case 4: opc=0;
                            break;

                            case 2: opc=2;

                                    system("cls");
                            break;

                            case 3: opc=3;
                            break;

                            case 1: opc=1;
                                    system("cls");
                            break;

                            case 7: opc=7;
                                    system("cls");
                                break;
                    }

                    break;
    default:
            break;
                    }

        //cout<< "Key: " << key;
        //rlutil::anykey();


        switch(opc){
        case 1:         unjugador(unJugador, puntosJuego);
            break;
        case 2: jugar(nombres, puntos);
                if (puntos[0]>puntos[1] && puntos[0]>puntajeMaximo){
                        puntajeMaximo = puntos[0];
                        jugadorMaximo = nombres[0];
                }
                else{
                    if(puntos[1]> puntajeMaximo){
                    puntajeMaximo = puntos[1];
                    jugadorMaximo = nombres[1];
                }
                }
            system("cls");

            break;
        case 3:
                            system("cls");
                            rlutil::locate(30,13);
                        cout<<"EL PUNTAJE MAXIMO ES " <<puntajeMaximo<<endl;
                            rlutil::locate(30,14);
                        cout<<"OBTENIDO POR " <<jugadorMaximo<<endl;
                        system("pause");
                        break;

        case 0:
                        rlutil::locate(30,20);
                        cout<<"GRACIAS POR USAR NUESTRO PROGRAMA " <<endl;
                        return 0;
                        break;

        case 7:         ///MODO SIMUILADO
                        modoSimulado (unJugador, puntosJuego);
            break;
        }
        opc=-1;
    }
    return 0;
}


# include <iostream>

 using namespace std;
#include "rlutil.h"
#include "funciones.h"
#include "fun_juego.h"


///juego para un jugador
void unjugador(string unJugador, int puntosJuego){
    int rondas;
    int dados[5];
    cout<<"Ingresar nombre del jugador ";
    cin>>unJugador;
    cout<<"Ingresar cantidad de rondas a jugar ";
    cin>>rondas;

    ///iniciamos el juego para un jugador!
    for(int i=1; i<=rondas; i++){

            system("cls");
            cout<<"TURNO DEL JUGADOR " <<unJugador<<" RONDA NUMERO " <<i<<endl;
            cout<<"---------------------------------------"<<endl;

                ///tirar dados de manera aleatoria
                            cargarAleatorio(dados, 5, 6);

                            ///comprobar si hay o no escalera
                            ordenarVector(dados,5);
                            int escalera = compEscalera(dados,5);
                            if(escalera==1){
                              cout<<"GANADOR POR ESCALERA AUTOMATICO! "<<endl;
                              mostrarVector(dados, 5);
                              cout<<"GRACIAS POR JUGAR A NUESTRO JUEGO" <<endl;
                              break;
                            }
                            else{
                            /// comprobar si son iguales o no, si lo son a ese numero multiplicarlo por 10
                            bool compIgual = todosIguales(dados,5);
                            int puntaje = 0;
                            if(compIgual == true){
                                cout << "¡TODOS LOS DADOS SON IGUALES!" << endl;
                                mostrarVector(dados, 5);
                                puntaje = dados[0]*10;
                                cout << "PUNTAJE ESPECIAL: " << puntaje << endl;
                                puntosJuego += puntaje;
                            }
                            else{

                            ///comprobar si hay un sexteto o no!
                            bool sexteto = compararSexteto(dados,5);
                                if(sexteto==true){
                                        mostrarVector(dados, 5);
                                    cout<<"SEXTETO! TU PUNTAJE SE REINICIA "<<endl;
                                    puntosJuego=0;
                                    cout<<"TU PUNTAJE ACTUAL ES " <<puntosJuego<<endl;
                                }
                                else{


                            ///mostrar vector
                            mostrarVector(dados, 5);

                            ///obtener puntaje
                                            /// modo competitivo (int posMax = maximoVector(dados, 5);)
                          int suma = sumarVector(dados,5);
                          puntosJuego += suma;

                            cout<<endl;
                            cout<<"-----------------------------------"<<endl;
                            cout<<"PUNTAJE DE LA TIRADA " <<suma<<endl;
                            cout<<"PUNTOS TOTALES " <<puntosJuego<<endl;
                            cout<<"-----------------------------------"<<endl;


                            system("pause");
                                }}}
    }
    }

    system("cls");
    cout<<"-----------------------------------"<<endl;
    cout<<"GRACIAS POR JUGAR!! " <<unJugador<<endl;
    cout<<"TU PUNTAJE FUE UN TOTAL DE " <<puntosJuego<<" PUNTOS"<<endl;
    cout<<"-----------------------------------"<<endl;
    system("pause");
}


/// juego para 2 jugadores!!!
void jugar(string nombres[], int puntos[]){
    int rondas;
    int dados[5];
    cout<<"Ingresar el nombre del jugador 1 ";
    cin>>nombres[0];
    cout<<"Ingresar el nombre del jugador 2 ";
    cin>>nombres[1];
    ///
    cout<<"Ingresar la cantidad de rondas ";
    cin>>rondas;

    ///iniciar el juego
    for (int i=1; i<=rondas; i++){
            for(int j=0;j<2;j++){
                                system("cls");
                                cout<<"TURNO DEL JUGADOR " <<j+1<< "        |         "<<nombres[j]<<endl;
                                cout<<"---------------------------------------"<<endl;
                            ///tirar dados de manera aleatoria
                            cargarAleatorio(dados, 5, 6);

                            ///comprobar si hay o no escalera
                            ordenarVector(dados,5);
                            int escalera = compEscalera(dados,5);
                            if(escalera==1){
                              cout<<"GANADOR POR ESCALERA AUTOMATICO! "<<endl;
                              mostrarVector(dados, 5);
                              cout<<"EL GANADOR ES " <<nombres[j]<<endl;
                              cout<<"GRACIAS POR JUGAR A NUESTRO JUEGO" <<endl;
                              break;
                            }
                            else{
                            /// comprobar si son iguales o no, si lo son a ese numero multiplicarlo por 10
                            bool compIgual = todosIguales(dados,5);
                            int puntaje = 0;
                            if(compIgual == true){
                                cout << "¡TODOS LOS DADOS SON IGUALES!" << endl;
                                mostrarVector(dados, 5);
                                puntaje = dados[0]*10;
                                cout << "PUNTAJE ESPECIAL: " << puntaje << endl;
                                puntos[j] += puntaje;
                            }
                            else{

                            ///comprobar si hay un sexteto o no!
                            bool sexteto = compararSexteto(dados,5);
                                if(sexteto==true){
                                        mostrarVector(dados, 5);
                                    cout<<"SEXTETO! TU PUNTAJE SE REINICIA "<<endl;
                                    puntos[j]=0;
                                    cout<<"TU PUNTAJE ACTUAL ES " <<puntos[0]<<endl;
                                }
                                else{


                            ///mostrar vector
                            mostrarVector(dados, 5);

                            ///obtener puntaje
                                        /// modo competitivo : int posMax = maximoVector(dados, 5);
                            int suma = sumarVector(dados,5);
                                puntos[j]+= suma;
                            ///sumar al anterior
                            ///competitivo: puntos[j] += dados[posMax];
                            cout<<endl;
                            cout<<"---------------------------------------"<<endl;
                            cout<<"PUNTAJE DE LA TIRADA " <<suma<<endl;
                            cout<<"PUNTOS TOTALES " <<puntos[j]<<endl;
                            cout<<"---------------------------------------"<<endl;


                            system("pause");
                                }}}
            }
            system("cls");
            cout << "RONDA NRO " << i << " FINALIZADA" << endl;
            cout << "-----------------------------------" << endl;
            cout << "PUNTAJE DEL JUGADOR 1: " << puntos[0] << endl;
            cout << "PUNTAJE DEL JUGADOR 2: " << puntos[1] << endl;
            cout << "-----------------------------------" << endl;
    if (i < rondas) {
        cout << "EL PROXIMO TURNO ES DE " << nombres[0] << endl;
    }
    system("pause");
}
system("cls");
}

/// MODO SIMULADO PARA UN JUGADOR
void modoSimulado (string unJugador, int puntosJuego){
    int rondas;
    int dados[5];
    cout<<"Ingresar nombre del jugador ";
    cin>>unJugador;
    cout<<"Ingresar cantidad de rondas a jugar ";
    cin>>rondas;

    ///iniciamos el juego para un jugador!
    for(int i=1; i<=rondas; i++){
            system("cls");
            cout<<"TURNO DEL JUGADOR " <<unJugador<<" RONDA NUMERO " <<i<<endl;
            cout<<"---------------------------------------"<<endl;

                ///cargar los dados de forma MANUAL
                cout<<"CARGAR DADOS DE MANERA MANUAL "<<endl;
                cout<<"ESCRIBIRLOS UNO POR UNO "<<endl;
                            cargarVector(dados, 5);

                            ///comprobar si hay o no escalera
                            ordenarVector(dados,5);
                            int escalera = compEscalera(dados,5);
                            if(escalera==1){
                              cout<<"GANADOR POR ESCALERA AUTOMATICO! "<<endl;
                              mostrarVector(dados, 5);
                              cout<<"GRACIAS POR JUGAR A NUESTRO JUEGO" <<endl;
                              system("pause");
                              break;
                            }
                            else{
                                            /// comprobar si son iguales o no, si lo son a ese numero multiplicarlo por 10
                            bool compIgual = todosIguales(dados,5);
                            int puntaje = 0;
                            if(compIgual == true){
                                cout << "¡TODOS LOS DADOS SON IGUALES!" << endl;
                                mostrarVector(dados, 5);
                                puntaje = dados[0]*10;
                                cout << "PUNTAJE ESPECIAL: " << puntaje << endl;
                                puntosJuego += puntaje;
                            }
                            else{

                            ///comprobar si hay un sexteto o no!
                            bool sexteto = compararSexteto(dados,5);
                                if(sexteto==true){
                                        mostrarVector(dados, 5);
                                    cout<<"SEXTETO! TU PUNTAJE SE REINICIA "<<endl;
                                    puntosJuego=0;
                                    cout<<"TU PUNTAJE ACTUAL ES " <<puntosJuego<<endl;
                                    system("pause");
                                    break;
                                }
                            else{

                            ///mostrar vector
                            mostrarVector(dados, 5);

                            ///obtener puntaje
                                            /// modo competitivo (int posMax = maximoVector(dados, 5);)
                          int suma = sumarVector(dados,5);
                          puntosJuego += suma;

                            cout<<endl;
                            cout<<"-----------------------------------"<<endl;
                            cout<<"PUNTAJE DE LA TIRADA " <<suma<<endl;
                            cout<<"PUNTOS TOTALES " <<puntosJuego<<endl;
                            cout<<"-----------------------------------"<<endl;
                            }}}

                            system("pause");

    }
    system("cls");
    cout<<"-----------------------------------"<<endl;
    cout<<"GRACIAS POR JUGAR!! " <<unJugador<<endl;
    cout<<"TU PUNTAJE FUE UN TOTAL DE " <<puntosJuego<<" PUNTOS"<<endl;
    cout<<"-----------------------------------"<<endl;
    system("pause");
}





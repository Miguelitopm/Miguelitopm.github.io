//Miguel Penaranda
#include <iostream> // Entrada y salida de Datos
#include <string> // Manejo de Strings
#include <cstdlib> // Biblioteca Random
#include <thread> // Biblioteca para usar sleep_for
#include <chrono> // Biblioteca para usar seconds
#include <windows.h> // Para el uso de Sleep()

using namespace std;

class Jugador { 
public:
    int vida = 100;
    int energia = 100;
    bool Estaesquivando = false;

    // Acciones
    // Ataque Simple
    bool ataqueSimple(Jugador& oponente) {
        if (energia < 10 || oponente.Estaesquivando){
            return false;
        }
        energia -= 10;
        int minSim = 10;
        int maxSim = 20;
        oponente.vida -= rand() % (maxSim - minSim) + minSim;
        return true;
    }

    // Ataque Especial 
    bool ataqueEspecial(Jugador& oponente) {
        if (energia < 20 || oponente.Estaesquivando){
            return false;
        }
        energia -= 20;
        int minEsp = 20;
        int maxEsp = 40;
        oponente.vida -= rand() % (maxEsp - minEsp) + minEsp;
        return true;
    }

    // Esquivar
    bool esquivar() {
        energia -= 20;
        if (energia < 20){
            return false;
        }
        energia -= 20;
        Estaesquivando = true;
        return true;
    }

    //Energia
    void recuperarEnergia(){
        energia += 15;
        if (energia > 100){
            energia = 100;
        }
    }
    
    bool estaVivo() {
        return vida > 0;
    }
};

    //Menu de Acciones
void mostrarMenu() {
    cout << "Elige una accion: " << endl;
    cout << "1. Ataque simple (10 a 20 de ataque / -10 energia)" << endl;
    cout << "2. Ataque especial (20 a 40 de ataque / -20 energia) " << endl;
    cout << "3. Esquivar (-20 energia ) " << endl;
    cout << "4. Recuperar Energia (+15 de energia)" << endl;
}

    //Jugador 1
void mostrarJugador1(){
    cout << "   " << endl;
    cout << "               ,   .-'""'=;_  , " << endl;
    cout << "               |\\.'-~`-.`-`;/| " << endl; //1
    cout << "               \\.` '.'~-.` './ " << endl; //2
    cout << "               (\\`,__=-'__,'/) " << endl; //3
    cout << "            _.-'-.( d\\_/b ).-'-._ " << endl; //4
    cout << "          /'.-'   ' .---. '   '-.`\\ " << endl; //5
    cout << "        /'  .' (=    (_)    =) '.  `\\ " << endl; //6
    cout << "       /'  .',  `-.__.-.__.-'  ,'.  `\\ " << endl; //7
    cout << "      (     .'.   V       V  ; '.     ) " << endl; //8
    cout << "      (    |::  `-,__.-.__,-'  ::|    ) " << endl; //9
    cout << "      |   /|`:.               .:'|\\   | " << endl; //10
    cout << "      |  / | `:.              :' |`\\  | " << endl; //11
    cout << "      | |  (  :.             .:  )  | | " << endl; //12
    cout << "      | |   ( `:.            :' )   | | " << endl; //13
    cout << "      | |    \\ :.           .: /    | | " << endl; //14
    cout << "      | |     \\`:.         .:'/     | | " << endl; //15
    cout << "      ) (      `\\`:.     .:'/'      ) ( " << endl; //16
    cout << "      (  `)_     ) `:._.:' (     _(`  ) " << endl; //17
    cout << "      \\  ' _)  .'           `.  (_ `  / " << endl; //18
    cout << "       \\  '_) /   .' ``` '.   \\ (_`  / " << endl; //19
    cout << "        `' `  \\  (         )  /  ` '` " << endl; //20
    cout << "    ________   `.`.       .'.'   ______ " << endl; //21
    cout << "  .`   ``   '''--`_)     (_'--'''   ``   `. " << endl; //22
    cout << " (_(_(___...--' '`         `' '--...___)_)_) " << endl; //23
    cout << "  " << endl; //25
}

    //Jugador
void mostrarJugador2(){
    
    cout << "  " << endl;
    cout << "       .... " << endl; //1
    cout << "     .'   ,: " << endl; //2
    cout << "   .'      \\.___.. " << endl; //3
    cout << " .'      .-'   _.' " << endl; //4
    cout << " '.\\  \\/...-''`\\ " << endl; //5
    cout << "   :.'   /   \\  : " << endl; //6
    cout << "    :    () () / " << endl; //7
    cout << "   (_ .  '--' ':        .':" << endl; //8
    cout << "      / |_'-- .'       .'.' " << endl; //9
    cout << "      \\   \\  .'_\\    .'.' " << endl; //10
    cout << "     .|__  \\/_/:   .'.' " << endl; //11
    cout << "    /          :\\.',;' " << endl; //12
    cout << "   .' -./      .'{\\|)) " << endl; //13
    cout << "   '.   ',_,-.',;'--: " << endl; //14
    cout << "   / '../_   \\,;'_.' " << endl; //15
    cout << "   :.   ,''-'-'  \\ " << endl; //16
    cout << "    \'.'   / \\..': " << endl; //17
    cout << "    .'    /.-.   : " << endl; //18
    cout << "    '.   / \\  |''\\ " << endl; //19
    cout << "      './--:  /   \\._ " << endl; //20
    cout << "       \\.   '.'._.___: " << endl; //21
    cout << "         '...' " << endl; //22
    cout << "  " << endl; //23
} 

    //Mostrar Stats
    void mostrarEstado(const Jugador& Jugador){
        cout << "   Vida " << Jugador.vida << endl;
        cout << "Energia " << Jugador.energia << endl;
        cout << "  " << endl;
    }

    //Aviso de Stats
   void verificarEstado(const Jugador& Jugador) {
    if ( Jugador.vida < 20) {
        cout << "Te queda poca vida " << endl;
    }
     if ( Jugador.energia < 20) {
        cout << "Te estas quedando sin energia " << endl;
    }
    }

int main() {
    Jugador jugador1;
    Jugador jugador2;
    int accion1, accion2;

    //Pantalla Inicial
    cout << "  " << endl;
    cout << "      _                                ____                           _         " << endl;
    cout << "     / \\  _   _ _ __ ___  _ __ __ _   |  _ \\ _ __ ___  ___  ___ _ __ | |_ __ _  " << endl;
    cout << "    / _ \\| | | | '__/ _ \\| '__/ _` |  | |_) | '__/ _ \\/ __|/ _ \\ '_ \\| __/ _` | " << endl;
    cout << "   / ___ \\ |_| | | | (_) | | | (_| |  |  __/| | |  __/\\__ \\  __/ | | | || (_| | " << endl;
    cout << "  /_/   \\_\\__,_|_|  \\___/|_|  \\__,_|  |_|   |_|  \\___||___/\\___|_| |_|\\__\\__,_| " << endl;
    cout << "  " << endl;
    Sleep(5000);
    system("cls");

    cout << "  " << endl;
    cout << "  _                                   _____                       " << endl;
    cout << " | |    ___   ___  _ __   ___ _   _  |_   _|   _ _ __   ___  ___  " << endl;
    cout << " | |   / _ \\ / _ \\| '_ \\ / _ \\ | | |   | || | | | '_ \\ / _ \\/ __| " << endl;
    cout << " | |__| (_) | (_) | | | |  __/ |_| |   | || |_| | | | |  __/\\__ \\ " << endl;
    cout << " |_____\\___/ \\___/|_| |_|\\___|\\__, |   |_| \\__,_|_| |_|\\___||___/ " << endl;
    cout << "                              |___/                               " << endl;
    cout << "  " << endl;
    Sleep(3000);
    system("cls");

    while (jugador1.vida > 0 && jugador2.vida > 0) {
        // Turno del jugador 1
        system("cls");
        cout << "Turno del jugador 1." << endl;
        jugador1.Estaesquivando = false;
        mostrarEstado(jugador1);
        mostrarJugador1();
        mostrarMenu();
        cin >> accion1;

        // Turno del jugador 2
        system("cls");
        cout << "Turno del jugador 2. " << endl;
        jugador1.Estaesquivando = false;
        mostrarEstado(jugador2);
        mostrarJugador2();
        mostrarMenu();
        cin >> accion2;

        // Ejecutar las acciones elegidas J1
        switch (accion1) {
            case 1:
                jugador1.ataqueSimple(jugador2);
                break;
            case 2:
                jugador1.ataqueEspecial(jugador2);
                break;
            case 3:
                jugador1.esquivar();
                break;
            case 4:
                jugador1.recuperarEnergia();
            default:
                cout << "Acción no válida. Inténtalo de nuevo.\n";
        }

        // Eleccion J2
        switch (accion2) {
            case 1:
                jugador2.ataqueSimple(jugador1);
                break;
            case 2:
                jugador2.ataqueEspecial(jugador1);
                break;
            case 3: 
                jugador2.esquivar();
                break;
            case 4:
                jugador2.recuperarEnergia();
            default: 
                cout << "Acción no válida. Inténtalo de nuevo.\n";
        }

        //Esquivar
        jugador1.Estaesquivando = false;
        jugador2.Estaesquivando = false;

        if ( !jugador1.estaVivo() ){
        system("cls");
        cout << "                    " << endl;
        cout << " < Jugador 1 ha muerto > " << endl;
        cout << "  _____" << endl;
        cout << " /     \\" << endl;
        cout << "|       |" << endl;
        cout << "| RIP   |" << endl;
        cout << "|       |" << endl;
        cout << "|_______|" << endl;
        cout << "         " << endl;
        system ("pause");
        exit(0);

        } else if (!jugador2.estaVivo()){
        system("cls");
        cout << "                    " << endl;
        cout << " < Jugador 2 ha muerto > " << endl;
        cout << "  _____" << endl;
        cout << " /     \\" << endl;
        cout << "|       |" << endl;
        cout << "| RIP   |" << endl;
        cout << "|       |" << endl;
        cout << "|_______|" << endl;
        cout << "         " << endl;
        system ("pause");
        exit(0);

        }

        system("cls");

        cout << "Estado del jugador 1:\n";
        mostrarEstado(jugador1);
        verificarEstado(jugador1);

        cout << "Estado del jugador 2:\n";
        mostrarEstado(jugador2); 
        verificarEstado(jugador2); 

        Sleep(6000);
        system("cls");
    } 
    return 0;
}
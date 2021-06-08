//Garantindo que o arquivo nao seja inicializado varias vezes
#ifndef TEMPO_H
// definindo o arquivo que ta usando
#define TEMPO_H

class Tempo {  //prototipo da classe Tempo
        //Atributos privados
            int hora, minuto, segundo;
        //Atributos p�blicos
        public:
            Tempo(); //para inicializar os valores com 0
            void setHorario(int, int, int); //Setar os hor�rios
            int totalSegundos(); //converte a hora, minuto e segundos em segundos
};
#endif // TEMPO_H

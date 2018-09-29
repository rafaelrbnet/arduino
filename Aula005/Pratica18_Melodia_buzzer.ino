#include "pitches.h"
#define NO_SOUND 0 // Nota que ajudar a fazer as pausas durante as músicas.

// Notas que devem ser tocadas ordenadamente;

int melodia[] ={
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
// Duração das Notas: Colcheia:8; Semínima: 4; Mínima:2; Semibreve:1
int tempoNotas[] ={
    4, 8, 8, 4, 4, 4, 4, 4
};

const int compasso = 1000; // Altera o compasso da música
void setup(){
  //o número 7 indica quantas notas tem a nossa matriz.
  for (int Nota = 0; Nota <8; Nota++){
    //Tempo = compasso dividido pela indicação da matriz tempoNotas.
    int tempo = compasso/tempoNotas[Nota]; 
    //Toca a nota indicada pela matriz melodia durante o tempo.
    tone(10, melodia[Nota],tempo); 
    // Para distinguir as notas adicionamos um tempo entre elas (tempo da nota + 20%).
    delay(tempo*1.2);
  }
}
void loop(){
  //Não é necessária a repetição pois a mesma será feita pelo botão Reset.
}
//Fim de Programa

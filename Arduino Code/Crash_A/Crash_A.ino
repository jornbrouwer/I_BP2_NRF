#define int BUFFERSIZE = 10;
int cir_buffer[bufferSize];    //Maak array met 'buffersize'
int count;                     //Hoeveel getallen staan er in de rij
int startPointer;              //Welke getal is aan de beurt

void setup() {
  Serial.begin(9600);
}

void loop() {

}


int appendToBuffer(int nieuwGetal){
  int startPointer; //Wie is er aan de beurt
  int count;   //Hoeveel staan er in de rij
  
  
  /*if(count == 0){
    startPointer = 0;
    cir_buffer[startPointer] = nieuwGetal;
    
    
    startPointer ++;   
    count ++;
  }
  */
}

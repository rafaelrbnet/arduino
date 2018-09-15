int Led = 3;             // atribuiu pino 3 digital a palavra Led  
int Pot = 0;             // atribuiu pino A0 analogico a palavra Pot  
int valor = 0;           // atribuiu 0 a varivel valor 

// float  variavel com maior resoluçao de numeros inteiros
// pode chegar a 3.4028235 E+38 (32 bits)
float luminosidade = 0;  // atribuiu 0 a varivel luminosidade
    
void setup()  
{  
  Serial.begin(9600);    //Inicializa a comunicacao serial 
  pinMode(Led, OUTPUT); //Define o pino do 3 como saída  
}  
   
void loop()  
{     
  valor = analogRead(Pot);    // Le o valor analogico do potenciometro (0 a 1023) 
  luminosidade = map(valor, 0, 1023, 0, 255);  // Converte o valor lido do Pot
  
  Serial.print("Valor lido do Potenciometro : "); 
  Serial.print(valor);  
  Serial.print(" = Luminosidade : ");  
  Serial.println(luminosidade); 
    
  // agora trocamos a escrita digital HIGT ou LOW para o valor de luminositade lida pelo potenciometro
  analogWrite(Led, luminosidade); // Acende o Led - Sinal PWM (0 a 255)
 }
 

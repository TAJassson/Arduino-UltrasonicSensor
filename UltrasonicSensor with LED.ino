const int Lsensor = 13;
const int Rsensor = 32;
#define LED_PIN_RED  25
#define LED_PIN_Green  26
#define LED_PIN_Blue  27
#define M1Pin1 4
#define M1Pin2 16
#define M2Pin1 19
#define M2Pin2 21

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(Lsensor, INPUT);
  pinMode(Rsensor, INPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(LED_PIN_RED, OUTPUT);
  pinMode(LED_PIN_Green, OUTPUT);
  pinMode(LED_PIN_Blue, OUTPUT);
  pinMode(M1Pin1, OUTPUT);
  pinMode(M1Pin2, OUTPUT);
  pinMode(M2Pin1, OUTPUT);
  pinMode(M2Pin2, OUTPUT);
}

void loop() {

  int L = digitalRead(Lsensor);
  int R = digitalRead(Rsensor);
  Serial.println("Left" + L);
  Serial.println("Right" + R);
     if (L >= 1 , R >= 1) //if both are reader = 255 - 1 = front and Blue light startup
     {
      digitalWrite(M1Pin1, LOW);
      digitalWrite(M1Pin2, HIGH);
      digitalWrite(M2Pin1, HIGH);
      digitalWrite(M2Pin2, LOW);
      digitalWrite(LED_PIN_Blue, HIGH);
     }
     
     if (L <= 0 , R >= 1 ) //if Left are 0 , Right = 255 - 1 = Left and Green light startup
     {
      digitalWrite(M1Pin1, HIGH);
      digitalWrite(M1Pin2, LOW);
      digitalWrite(M2Pin1, HIGH);
      digitalWrite(M2Pin2, LOW);
      digitalWrite(LED_PIN_Green, HIGH);
     }
     if (R <= 0 , L >= 1 ) //if Right are 0 , Left = 255 - 1 = Right and Red light startup
     {
      digitalWrite(M1Pin1, LOW);
      digitalWrite(M1Pin2, HIGH);
      digitalWrite(M2Pin1, LOW);
      digitalWrite(M2Pin2, HIGH);
      digitalWrite(LED_PIN_RED, HIGH);
     }
     delay(50);
}
      
      
  

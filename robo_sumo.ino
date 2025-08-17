int r1 = 8;
int r2 = 9;
int r3 = 10;
int r4 = 11;
int estado = 0;
const int buzzer = 5;

void setup() {
  Serial.begin(9600);
  pinMode (r1, OUTPUT);
  pinMode (r2, OUTPUT);
  pinMode (r3, OUTPUT);
  pinMode (r4, OUTPUT);
  pinMode (estado, INPUT);
  pinMode (buzzer, OUTPUT);
}

void loop() {
 estado = Serial.read();
      if (estado == 'F'){
        digitalWrite (8, HIGH);
        digitalWrite (9, LOW);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
      }

      if (estado == 'T'){
        digitalWrite (8, LOW);
        digitalWrite (9, HIGH);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
      }

      if (estado == 'D'){
        digitalWrite (8, HIGH);
        digitalWrite (9, LOW);
        digitalWrite (10, LOW);
        digitalWrite (11, HIGH);
      }

      if (estado == 'E'){
        digitalWrite (8, LOW);
        digitalWrite (9, HIGH);
        digitalWrite (10, HIGH);
        digitalWrite (11, LOW);
      }

      if (estado == 'P'){
        digitalWrite (8, LOW);
        digitalWrite (9, LOW);
        digitalWrite (10, LOW);
        digitalWrite (11, LOW);
      }
}

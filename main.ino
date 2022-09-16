#define fPIR 9 // front PIR data pin
#define rPIR 12 // rear PIR data pin
#define percentage 60 // percentage of allowed personnel
#define maxcap 120 // max capacity of people in the venue
 
void setup() {
  pinMode(fPIR, OUTPUT);
  pinMode(rPIR, OUTPUT);
  Serial.begin(9600);
}

int pnum = 0;

void loop() {
  /* if (pnum >= (maxcap * (percentage / 100)) ) {
    // add your own hooks to warn user here
  } */
  while (digitalRead(fPIR) == HIGH) {
    for (int i = 0; i <= 10 && in != 1, i++) {
      if (digitalRead(rPIR) == HIGH) {
        pnum = pnum + 1;
      }
      delay(100);
    }
  }
  while (digitalRead(rPIR) == HIGH) {
    for (int i = 0; i <= 10 && in != 1, i++) {
      if (digitalRead(fPIR) == HIGH) {
        pnum = pnum - 1;
      }
      delay(100);
    }
  }
  delay(1000);
}

int incomingVal = 0;

int delaySpeed = 5000;

const int LEDR2 = 52;
const int LEDY2 = 50;
const int LEDG2 = 48;

const int LEDR3 = 46;
const int LEDY3 = 44;
const int LEDG3 = 42;

const int LEDR4 = 51;
const int LEDY4 = 49;
const int LEDG4 = 47;

const int LEDR1 = 45;
const int LEDY1 = 43;
const int LEDG1 = 41;

const int LEDR1P = 26;
const int LEDW1P = 28;

const int LEDR2P = 23;
const int LEDW2P = 25;

const int LEDR3P = 12;
const int LEDW3P = 13;

const int LEDR4P = 9;
const int LEDW4P = 8;

const int LEDR5P = 11;
const int LEDW5P = 10;

const int LEDR6P = 6;
const int LEDW6P = 7;

const int LEDR7P = 29;
const int LEDW7P = 27;

const int LEDR8P = 24;
const int LEDW8P = 22;

void getSerialInput() {
  if (Serial.available() > 0) {
    incomingVal = Serial.read();
    Serial.print(incomingVal);
    Serial.print("\n");
    if (incomingVal == 49) {
      digitalWrite(LEDR1P, LOW);
      digitalWrite(LEDR8P, LOW);
      digitalWrite(LEDW1P, HIGH);
      digitalWrite(LEDW8P, HIGH);
      digitalWrite(LEDG3, HIGH);
      digitalWrite(LEDG4, HIGH);
      digitalWrite(LEDR3, LOW);
      digitalWrite(LEDR4, LOW);
      delay(delaySpeed);
      digitalWrite(LEDG3, LOW);
      digitalWrite(LEDG4, LOW);
      digitalWrite(LEDY3, HIGH);
      digitalWrite(LEDY4, HIGH);
      delay(delaySpeed);
      digitalWrite(LEDY3, LOW);
      digitalWrite(LEDY4, LOW);
      digitalWrite(LEDR3, HIGH);
      digitalWrite(LEDR4, HIGH);
      digitalWrite(LEDW1P, LOW);
      digitalWrite(LEDW8P, LOW);
      digitalWrite(LEDR1P, HIGH);
      digitalWrite(LEDR8P, HIGH);
      delay(delaySpeed);
    }
    else if (incomingVal == 50) {
      digitalWrite(LEDR2P, LOW);
      digitalWrite(LEDR3P, LOW);
      digitalWrite(LEDW2P, HIGH);
      digitalWrite(LEDW3P, HIGH);
      digitalWrite(LEDG1, HIGH);
      digitalWrite(LEDG2, HIGH);
      digitalWrite(LEDR1, LOW);
      digitalWrite(LEDR2, LOW);
      delay(delaySpeed);
      digitalWrite(LEDG1, LOW);
      digitalWrite(LEDG2, LOW);
      digitalWrite(LEDY1, HIGH);
      digitalWrite(LEDY2, HIGH);
      delay(delaySpeed);
      digitalWrite(LEDY1, LOW);
      digitalWrite(LEDY2, LOW);
      digitalWrite(LEDR1, HIGH);
      digitalWrite(LEDR2, HIGH);
      digitalWrite(LEDW2P, LOW);
      digitalWrite(LEDW3P, LOW);
      digitalWrite(LEDR2P, HIGH);
      digitalWrite(LEDR3P, HIGH);
      delay(delaySpeed);
    }
    else if (incomingVal == 51) {
      digitalWrite(LEDR4P, LOW);
      digitalWrite(LEDR5P, LOW);
      digitalWrite(LEDW4P, HIGH);
      digitalWrite(LEDW5P, HIGH);
      digitalWrite(LEDG3, HIGH);
      digitalWrite(LEDG4, HIGH);
      digitalWrite(LEDR3, LOW);
      digitalWrite(LEDR4, LOW);
      delay(delaySpeed);
      digitalWrite(LEDG3, LOW);
      digitalWrite(LEDG4, LOW);
      digitalWrite(LEDY3, HIGH);
      digitalWrite(LEDY4, HIGH);
      delay(delaySpeed);
      digitalWrite(LEDY3, LOW);
      digitalWrite(LEDY4, LOW);
      digitalWrite(LEDR3, HIGH);
      digitalWrite(LEDR4, HIGH);
      digitalWrite(LEDW4P, LOW);
      digitalWrite(LEDW5P, LOW);
      digitalWrite(LEDR4P, HIGH);
      digitalWrite(LEDR5P, HIGH);
      delay(delaySpeed);
    }
    else if (incomingVal == 52) {
      digitalWrite(LEDR6P, LOW);
      digitalWrite(LEDR7P, LOW);
      digitalWrite(LEDW6P, HIGH);
      digitalWrite(LEDW7P, HIGH);
      digitalWrite(LEDG1, HIGH);
      digitalWrite(LEDG2, HIGH);
      digitalWrite(LEDR1, LOW);
      digitalWrite(LEDR2, LOW);
      delay(delaySpeed);
      digitalWrite(LEDG1, LOW);
      digitalWrite(LEDG2, LOW);
      digitalWrite(LEDY1, HIGH);
      digitalWrite(LEDY2, HIGH);
      delay(delaySpeed);
      digitalWrite(LEDY1, LOW);
      digitalWrite(LEDY2, LOW);
      digitalWrite(LEDR1, HIGH);
      digitalWrite(LEDR2, HIGH);
      digitalWrite(LEDW6P, LOW);
      digitalWrite(LEDW7P, LOW);
      digitalWrite(LEDR6P, HIGH);
      digitalWrite(LEDR7P, HIGH);
      delay(delaySpeed);
    }
    // Day mode
    else if (incomingVal == 53) {
      pinMode(LEDR1, OUTPUT);
      pinMode(LEDY1, OUTPUT);
      pinMode(LEDG1, OUTPUT);
      
      pinMode(LEDR2, OUTPUT);
      pinMode(LEDY2, OUTPUT);
      pinMode(LEDG2, OUTPUT);

      pinMode(LEDR3, OUTPUT);
      pinMode(LEDY3, OUTPUT);
      pinMode(LEDG3, OUTPUT);
      
      pinMode(LEDR4, OUTPUT);
      pinMode(LEDY4, OUTPUT);
      pinMode(LEDG4, OUTPUT);

      pinMode(LEDR1P, OUTPUT);
      pinMode(LEDR2P, OUTPUT);
      pinMode(LEDR3P, OUTPUT);
      pinMode(LEDR4P, OUTPUT);
      pinMode(LEDR5P, OUTPUT);
      pinMode(LEDR6P, OUTPUT);
      pinMode(LEDR7P, OUTPUT);
      pinMode(LEDR8P, OUTPUT);

      pinMode(LEDW1P, OUTPUT);
      pinMode(LEDW2P, OUTPUT);
      pinMode(LEDW3P, OUTPUT);
      pinMode(LEDW4P, OUTPUT);
      pinMode(LEDW5P, OUTPUT);
      pinMode(LEDW6P, OUTPUT);
      pinMode(LEDW7P, OUTPUT);
      pinMode(LEDW8P, OUTPUT);
    }
    // Night mode
    else if (incomingVal == 54) {
      pinMode(LEDR1, INPUT);
      pinMode(LEDY1, INPUT);
      pinMode(LEDG1, INPUT);
      
      pinMode(LEDR2, INPUT);
      pinMode(LEDY2, INPUT);
      pinMode(LEDG2, INPUT);

      pinMode(LEDR3, INPUT);
      pinMode(LEDY3, INPUT);
      pinMode(LEDG3, INPUT);
      
      pinMode(LEDR4, INPUT);
      pinMode(LEDY4, INPUT);
      pinMode(LEDG4, INPUT);

      pinMode(LEDR1P, INPUT);
      pinMode(LEDR2P, INPUT);
      pinMode(LEDR3P, INPUT);
      pinMode(LEDR4P, INPUT);
      pinMode(LEDR5P, INPUT);
      pinMode(LEDR6P, INPUT);
      pinMode(LEDR7P, INPUT);
      pinMode(LEDR8P, INPUT);

      pinMode(LEDW1P, INPUT);
      pinMode(LEDW2P, INPUT);
      pinMode(LEDW3P, INPUT);
      pinMode(LEDW4P, INPUT);
      pinMode(LEDW5P, INPUT);
      pinMode(LEDW6P, INPUT);
      pinMode(LEDW7P, INPUT);
      pinMode(LEDW8P, INPUT);
    }
    // Normal speed
    else if (incomingVal == 55) {
      delaySpeed = 5000;
    }
    // Fast speed
    else if (incomingVal == 56) {
      delaySpeed = 3000;
    }
    // Slow speed
    else if (incomingVal == 57) {
      delaySpeed = 8000;
    }
  }
}

void oneTwo() {
  digitalWrite(LEDG1, HIGH);
  digitalWrite(LEDG2, HIGH);
  digitalWrite(LEDR1, LOW);
  digitalWrite(LEDR2, LOW);
  delay(5000);
  digitalWrite(LEDG1, LOW);
  digitalWrite(LEDG2, LOW);
  digitalWrite(LEDY1, HIGH);
  digitalWrite(LEDY2, HIGH);
  delay(5000);
  digitalWrite(LEDY1, LOW);
  digitalWrite(LEDY2, LOW);
  digitalWrite(LEDR1, HIGH);
  digitalWrite(LEDR2, HIGH);
  delay(5000);
}

void threeFour() {
  digitalWrite(LEDG3, HIGH);
  digitalWrite(LEDG4, HIGH);
  digitalWrite(LEDR3, LOW);
  digitalWrite(LEDR4, LOW);
  delay(5000);
  digitalWrite(LEDG3, LOW);
  digitalWrite(LEDG4, LOW);
  digitalWrite(LEDY3, HIGH);
  digitalWrite(LEDY4, HIGH);
  delay(5000);
  digitalWrite(LEDY3, LOW);
  digitalWrite(LEDY4, LOW);
  digitalWrite(LEDR3, HIGH);
  digitalWrite(LEDR4, HIGH);
  delay(5000);
}

void oneTwoLeft() {
  digitalWrite(LEDR1, HIGH);
  digitalWrite (LEDR2, HIGH);
  int wait12 = 0;
  do {
    digitalWrite(LEDG1, HIGH);
    digitalWrite(LEDG2, HIGH);
    delay(200);
    wait12 += 200;
    digitalWrite(LEDG1, LOW);
    digitalWrite(LEDG2, LOW);
    delay(200);
    wait12 += 200;
  } while (wait12 < 5000);
  digitalWrite(LEDY1, HIGH);
  digitalWrite(LEDY2, HIGH);
  delay(5000);
  digitalWrite(LEDY1, LOW);
  digitalWrite(LEDY2, LOW);
  delay(5000);
}

void threeFourLeft() {
  digitalWrite(LEDR3, HIGH);
  digitalWrite (LEDR4, HIGH);
  int wait34 = 0;
  do {
    digitalWrite(LEDG3, HIGH);
    digitalWrite(LEDG4, HIGH);
    delay(200);
    wait34 += 200;
    digitalWrite(LEDG3, LOW);
    digitalWrite(LEDG4, LOW);
    delay(200);
    wait34 += 200;
  } while (wait34 < 5000);
  digitalWrite(LEDY3, HIGH);
  digitalWrite(LEDY4, HIGH);
  delay(5000);
  digitalWrite(LEDY3, LOW);
  digitalWrite(LEDY4, LOW);
  delay(5000);
}

void setup() {
  Serial.begin(9600);

  pinMode(LEDR1, OUTPUT);
  pinMode(LEDY1, OUTPUT);
  pinMode(LEDG1, OUTPUT);
  
  pinMode(LEDR2, OUTPUT);
  pinMode(LEDY2, OUTPUT);
  pinMode(LEDG2, OUTPUT);

  pinMode(LEDR3, OUTPUT);
  pinMode(LEDY3, OUTPUT);
  pinMode(LEDG3, OUTPUT);
  
  pinMode(LEDR4, OUTPUT);
  pinMode(LEDY4, OUTPUT);
  pinMode(LEDG4, OUTPUT);

  pinMode(LEDR1P, OUTPUT);
  pinMode(LEDR2P, OUTPUT);
  pinMode(LEDR3P, OUTPUT);
  pinMode(LEDR4P, OUTPUT);
  pinMode(LEDR5P, OUTPUT);
  pinMode(LEDR6P, OUTPUT);
  pinMode(LEDR7P, OUTPUT);
  pinMode(LEDR8P, OUTPUT);

  pinMode(LEDW1P, OUTPUT);
  pinMode(LEDW2P, OUTPUT);
  pinMode(LEDW3P, OUTPUT);
  pinMode(LEDW4P, OUTPUT);
  pinMode(LEDW5P, OUTPUT);
  pinMode(LEDW6P, OUTPUT);
  pinMode(LEDW7P, OUTPUT);
  pinMode(LEDW8P, OUTPUT);
}

void loop() {
  digitalWrite(LEDR3, HIGH);
  digitalWrite(LEDR4, HIGH);
  digitalWrite(LEDR1, HIGH);
  digitalWrite(LEDR2, HIGH);

  digitalWrite(LEDR1P, HIGH);
  digitalWrite(LEDR2P, HIGH);
  digitalWrite(LEDR3P, HIGH);
  digitalWrite(LEDR4P, HIGH);
  digitalWrite(LEDR5P, HIGH);
  digitalWrite(LEDR6P, HIGH);
  digitalWrite(LEDR7P, HIGH);
  digitalWrite(LEDR8P, HIGH);


  getSerialInput();
  //oneTwoLeft();
  oneTwo();
  getSerialInput();
  //threeFourLeft();
  threeFour();
}

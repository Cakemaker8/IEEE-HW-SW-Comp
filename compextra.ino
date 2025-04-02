int incomingVal = 0;
int i1 = 0;
int i2 = 1000;

bool pedestrianStatus[4] = {false, false, false, false};
int pedestrianCounter[4] = {0, 0, 0, 0};
bool lightStatus[4] = {true, true, true, true};

const int LEDR1 = 52;
const int LEDY1 = 50;
const int LEDG1 = 48;

const int LEDR2 = 46;
const int LEDY2 = 44;
const int LEDG2 = 42;

const int LEDR3 = 51;
const int LEDY3 = 49;
const int LEDG3 = 47;

const int LEDR4 = 45;
const int LEDY4 = 43;
const int LEDG4 = 41;

const int PDSTRON1 = 22;
const int PDSTROFF1 = 23;

const int PDSTRON2 = 24;
const int PDSTROFF2 = 25;

const int PDSTRON3 = 26;
const int PDSTROFF3 = 27;

const int PDSTRON4 = 28;
const int PDSTROFF4 = 29;

void setup() {
  // put your setup code here, to run once:
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

pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(LEDR1, LOW);

  i1++;
  i2++;

  for (int i = 0; i < 4; i++) {
    if (pedestrianStatus[i]) {
      pedestrianCounter[i]++;
    }
  }

  //if (pedestrianCounter[0] < 2000 && pedestrianCounter[1] < 2000) {
    if (i1 > 0 && i1 < 2) {
      digitalWrite(LEDR1, LOW);
      digitalWrite(LEDR2, LOW);

      digitalWrite(LEDG1, HIGH);
      digitalWrite(LEDG2, HIGH);
    } else if (i1 > 700 && i1 < 702) {
      digitalWrite(LEDG1, LOW);
      digitalWrite(LEDG2, LOW);

      digitalWrite(LEDY1, HIGH);
      digitalWrite(LEDY2, HIGH);
    } else if (i1 > 1000 && i1 < 1002) {
      digitalWrite(LEDY1, LOW);
      digitalWrite(LEDY2, LOW);

      digitalWrite(LEDR1, HIGH);
      digitalWrite(LEDR2, HIGH);
    } else if (i1 > 1700) {
      i1 = 0;
    }
  //} else if (pedestrianCounter[0] == 2000 || pedestrianCounter[1] == 2000) {
    //digitalWrite(LEDR1, HIGH);
    //digitalWrite(LEDR2, HIGH);
 // }

  // if (pedestrianCounter[2] < 2000 && pedestrianCounter[3] < 2000) {
    if (i2 > 0 && i2 < 2) {
      digitalWrite(LEDR3, LOW);
      digitalWrite(LEDR4, LOW);

      digitalWrite(LEDG3, HIGH);
      digitalWrite(LEDG4, HIGH);
    } else if (i2 > 700 && i2 < 702) {
      digitalWrite(LEDG3, LOW);
      digitalWrite(LEDG4, LOW);

      digitalWrite(LEDY3, HIGH);
      digitalWrite(LEDY4, HIGH);
    } else if (i2 > 1000 && i2 < 1002) {
      digitalWrite(LEDY3, LOW);
      digitalWrite(LEDY4, LOW);

      digitalWrite(LEDR3, HIGH);
      digitalWrite(LEDR4, HIGH);
    } else if (i2 > 1700) {
      i2 = 0;
    }
  // } else if (pedestrianCounter[2] == 2000 || pedestrianCounter[3] == 2000) {
    // digitalWrite(LEDR3, HIGH);
    // digitalWrite(LEDR4, HIGH);
  // }

  if (Serial.available() > 0) {
    incomingVal = Serial.read();

    pedestrianStatus[incomingVal - 1] = true;

    Serial.print("Pedestrian wants to cross ");
    Serial.print(incomingVal);
    Serial.println("!");
  }
}

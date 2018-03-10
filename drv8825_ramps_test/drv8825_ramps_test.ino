
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62

#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

#define E1_STEP_PIN        36
#define E1_DIR_PIN         34
#define E1_ENABLE_PIN      30

void setup() {
  pinMode(X_STEP_PIN  , OUTPUT);
  pinMode(X_DIR_PIN   ,   OUTPUT);
  pinMode(X_ENABLE_PIN,  OUTPUT);
  
  pinMode(Y_STEP_PIN  ,  OUTPUT);
  pinMode(Y_DIR_PIN   ,  OUTPUT);
  pinMode(Y_ENABLE_PIN,  OUTPUT);
  
  pinMode(Z_STEP_PIN  ,  OUTPUT);
  pinMode(Z_DIR_PIN   ,  OUTPUT);
  pinMode(Z_ENABLE_PIN,  OUTPUT);
  
  pinMode(E0_STEP_PIN  , OUTPUT);
  pinMode(E0_DIR_PIN   , OUTPUT);
  pinMode(E0_ENABLE_PIN, OUTPUT);
  
  pinMode(E1_STEP_PIN  , OUTPUT);
  pinMode(E1_DIR_PIN   , OUTPUT);
  pinMode(E1_ENABLE_PIN, OUTPUT);
  
  digitalWrite(X_ENABLE_PIN,  LOW);
  digitalWrite(Y_ENABLE_PIN,  LOW);
  digitalWrite(Z_ENABLE_PIN,  LOW);
  digitalWrite(E0_ENABLE_PIN, LOW);
  digitalWrite(E1_ENABLE_PIN, LOW);
}

void loop() {

  // Changement de direction toutes les 5 secondes
  if (millis() %10000 <5000) {
    digitalWrite(X_DIR_PIN,  HIGH);
    digitalWrite(Y_DIR_PIN,  HIGH);
    digitalWrite(Z_DIR_PIN,  HIGH);
    digitalWrite(E0_DIR_PIN, HIGH);
    digitalWrite(E1_DIR_PIN, HIGH);
  }
  else {
    digitalWrite(X_DIR_PIN,  LOW);
    digitalWrite(Y_DIR_PIN,  LOW);
    digitalWrite(Z_DIR_PIN,  LOW);
    digitalWrite(E0_DIR_PIN, LOW);
    digitalWrite(E1_DIR_PIN, LOW);
  } 

  digitalWrite(X_STEP_PIN,  HIGH);
  digitalWrite(Y_STEP_PIN,  HIGH);
  digitalWrite(Z_STEP_PIN,  HIGH);
  digitalWrite(E0_STEP_PIN, HIGH);
  digitalWrite(E1_STEP_PIN, HIGH); 
  delay(1);

  digitalWrite(X_STEP_PIN,  LOW);
  digitalWrite(Y_STEP_PIN,  LOW);
  digitalWrite(Z_STEP_PIN,  LOW);
  digitalWrite(E0_STEP_PIN, LOW);
  digitalWrite(E1_STEP_PIN, LOW);  
}

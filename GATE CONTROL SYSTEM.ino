void setup() {

pinMode(IRsensori, INPUT);//FIRST IR SENSOR INPUT

pinMode(IRsensor2, INPUT);//SECOND IR SENSOR INPUT

pinMode(ledPin, OUTPUT);//LED (OPTIONAL)

pinMode (buzzerPin, OUTPUT);BUZZER INPUT

myServo.attach(servoPin); //GATE CONTROL MOTORS
}

void loop() {

int sensoriValue digitalRead(IRsensorl);


int sensor2Value digitalRead(IRsensor2);
if (sensoriValue HIGH && sensor2Value HIGH) (

// Train detected, close the gate.

myServo.write(e); // Close the gate (adjust angle as needed)

digitalWrite(ledPin, HIGH); // Turn on the LED

tone (buzzerPin, 1000); // Activate the buzzer

} else {

// Train gone, open the gate

myServo.write(90); // Open the gate (adjust angle as needed)

digitalWrite(ledPin, LOW); // Turn off the LED

no Tone (buzzerPin); // Deactivate the buzzer
}
}

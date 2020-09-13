g #include <Servo.h>       //defining servos

Servo myservo;      //create servo object to control servo motor

int pos = 0;    //variable to store the servo motor position
int pin =8; 
int ledPin = 11;
int ledPin = 10;
int state; int flag=0;
void setup()

{ 
pinMode(10,OUTPUT);
  pinMode(11, OUTPUT);
pinMode(pin,OUTPUT);
;
myservo.attach(9);    //attach the servo motor to pin9 of arduino uno

Serial.begin(9600);     //open serial port and set data rate upto 9600bps

myservo.write(60);

delay(1000); }

void loop()

{ digitalWrite(10,HIGH);   

if(Serial.available() > 0)

{

state = Serial.read();      // read data from serial port(bluetooth)      

flag=0;

} // if the state is '0' the DC motor will turn off

if (state == 'l')

{ noTone(pin);

myservo.write(0);   //set the position of servo motor to 0 degree

delay(1000);

Serial.println("Door Locked");

}
// if the state is '1' the DC motor will turn on

else if (state == 'u')

{ noTone(pin);
myservo.write(60);    //set the position of servo motor to 60 degree

delay(1000);

Serial.println("Door UnLocked");

}
else if
(state == '2'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);
 }
else if
(state == '3'){
 tone(pin,1000); 
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == '4'){
 tone(pin,1000);
  digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
 else if
(state == '5'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == '6'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == '7'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == '8'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == '9'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);
}
else if
(state == 'a'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'b'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'c'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'd'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'e'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'f'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'g'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'h'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'i'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'j'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'k'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == '0'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'm'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}
else if
(state == 'n'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'o'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'p'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'q'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'r'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 's'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 't'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == '1'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'v'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'w'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'x'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'y'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'z'){
 tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

} 
else if
(state == 'A'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'B'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'C'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'D'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'E'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'F'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'G'){

tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'H'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'I'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'J'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'K'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'L'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'M'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'N'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}


else if
(state == 'O'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}


else if
(state == 'P'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'Q'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'R'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'S'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'T'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'U'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'V'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'W'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'X'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'Y'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

else if
(state == 'Z'){
tone(pin,1000);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 delay(1000);

}

}

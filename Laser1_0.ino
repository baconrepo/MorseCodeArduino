int sensor=A1;  //photosensor Analog 1
int val =0;
unsigned long t1,t2,signal_len;
unsigned long duration;
float voltage=0.0;
int laser=5;   //Laser Digital 4
char input; 
void setup() {
  Serial.begin(9600);
  pinMode(laser,OUTPUT);
  pinMode(sensor,INPUT);
}
void loop() {
val=analogRead(sensor);
 voltage=val*(5.0/1024.0);
 //Serial.println(voltage);
 //while(Serial.available()) {
 duration=pulseIn(sensor,HIGH);
 //Serial.print(duration);
 if(duration=300000){Serial.print("dot");}
 if(duration=900000){Serial.print("dash");}
    input = Serial.read();
    if (input == 'a'){delay(10000);A();}
    if (input == 'b'){B();}
    if (input == 'c'){C();}
    if (input == 'd'){D();}
    if (input == 'e'){E();}
    if (input == 'f'){Ff();}
    if (input == 'g'){G();}
    if (input == 'h'){H();}
    if (input == 'i'){I();}
    if (input == 'j'){J();}
    if (input == 'k'){K();}
    if (input == 'l'){L();}
    if (input == 'm'){M();}
    if (input == 'n'){N();}
    if (input == 'o'){O();}
    if (input == 'p'){P();}
    if (input == 'q'){Q();}
    if (input == 'r'){R();}
    if (input == 's'){S();}
    if (input == 't'){T();}
    if (input == 'u'){U();}
    if (input == 'v'){V();}
    if (input == 'w'){W();}
    if (input == 'x'){X();}
    if (input == 'y'){Y();}
    if (input == 'z'){Z();}
    if (input == '0'){n0();}
    if (input == '1'){n1();}
    if (input == '2'){n2();}
    if (input == '3'){n3();}
    if (input == '4'){n4();}
    if (input == '5'){n5();}
    if (input == '6'){n6();}
    if (input == '7'){n7();}
    if (input == '8'){n8();}
    if (input == '9'){n9();}
    //Serial.println(input);
    if(voltage>1){t1=millis();}
    if(voltage<1){t2=millis();signal_len=(t2-t1);}
    if(signal_len<600 && signal_len>50){Serial.print('dash');}

  //}
}
void A() {dot();dash();shorty();}//letters in morse code
void B() {dash();dot();dot();dot();shorty();}
void C() {dash();dot();dash();dot();shorty();}
void D() {dash();dot();dot();shorty();}
void E() {dot();shorty();}
void Ff() {dot();dot();dash();dot();shorty();}
void G() {dash();dash();dot();shorty();}
void H() {dot();dot();dot();dot();shorty();}
void I() {dot();dot();shorty();}
void J() {dot();dash();dash();dash();shorty();}
void K() {dash();dot();dash();shorty();}
void L() {dot();dash();dot();dot();shorty();}
void M() {dash();dash();shorty();}
void N() {dash();dot();shorty();}
void O() {dash();dash();dash();shorty();}
void P() {dot();dash();dash();dot();shorty();}
void Q() {dash();dash();dot();dash();shorty();}
void R() {dot();dash();dot();shorty();}
void S() {dot();dot();dot();shorty();}
void T() {dash();shorty();}
void U() {dot();dot();dash();shorty();}
void V() {dot();dot();dot();dash();shorty();}
void W() {dot();dash();dash();shorty();}
void X() {dash();dot();dot();dash();shorty();}
void Y() {dash();dot();dash();dash();shorty();}
void Z() {dash();dash();dot();dot();shorty();}
void n1() {dot();dash();dash();dash();dash();shorty();}//numbers
void n2() {dot();dot();dash();dash();dash();shorty();}
void n3() {dot();dot();dot();dash();dash();shorty();}
void n4() {dot();dot();dot();dot();dash();shorty();}
void n5() {dot();dot();dot();dot();dot();shorty();}
void n6() {dash();dot();dot();dot();dot();shorty();}
void n7() {dash();dash();dot();dot();dot();shorty();}
void n8() {dash();dash();dash();dot();dot();shorty();}
void n9() {dash();dash();dash();dash();dot();shorty();}
void n0() {dash();dash();dash();dash();dash();shorty();}
void space() {delay (1200);}//space between words
void dot() {digitalWrite(laser,HIGH);delay(300); digitalWrite(laser,LOW); delay(300);}
void dash() {digitalWrite(laser,HIGH);delay(900);digitalWrite(laser,LOW); delay(300);}
void shorty(){delay(600);}
void off(){digitalWrite(laser,LOW);}


// Arduino MODULO KY011
int redpin = 11; // PIN red LED
int greenpin = 10; // PIN green LED
int val;
void setup () {
 pinMode (redpin, OUTPUT);
 pinMode (greenpin, OUTPUT);
}
void loop () {
 for (val = 255; val> 0; val--)
 {
 analogWrite (greenpin, val);
 analogWrite (redpin, 255-val);
 delay (15);
 }
 for (val = 0; val <255; val++)
 {
 analogWrite (greenpin, val);
 analogWrite (redpin, 255-val);
 delay (15);
 }
}

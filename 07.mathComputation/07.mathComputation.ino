/*
  Author: Crawford Lieu
  Learning Intention:
  The students will learn basic math and arithmetic operations in C++

  Success Criteria:
    1.  I know the arithmetic operation symbols %, *, +, -, / & =
    2.  I can perform arithmetic calculations
    3.  I know how to access more information in the documentation about math and arithmetic
    4.  I can access the order of operations documentation and use parenthesis to control
        the order of operations
    5.  I understand short-hand incrementation and decrementation
    6.  I can seed and generate a random number
    7.  I can map an analogue value on a range of 0-1023 to a PWM value on a range of 0-255

  Student Notes:
    % (remainder)
    * (multiplication)
    + (addition)
    - (subtraction)
    / (division)
    = (assignment operator)
    All data types must be the same.
    To convert:
      float()
      int()
      long()
    ' myVar += 3; ' will add 3 to whatever the number is currently.
    myVar2++ will add one to whatever the number is currently.
  Documentation:
    https://www.arduino.cc/reference/en/#structure
    https://en.cppreference.com/w/cpp/language/operator_precedence
    https://www.arduino.cc/reference/en/language/functions/random-numbers/random/
    https://www.arduino.cc/reference/en/language/functions/math/map/
  Schematic:
      https://www.tinkercad.com/things/ihcHlUXS9Y7?sharecode=bOdn0Sm9OuCJ6qI9GAwdyLsZDEUcecsmUharAUXXRIQ
      https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/08.mathComputation/Bootcamp-MAP-PotLED.png
*/

static unsigned int myNumber1 = 3;
static unsigned int myNumber2 = 5;
int myResult = 0;
unsigned int myCount = 0;
unsigned int my5Count = 0;
signed int myNegCount = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Monitor configured to 9600br.");
  Serial.println("---------------------------------------------------------");
  randomSeed(analogRead(0));
  myResult = random(0, 100);
  Serial.println(myResult);
}

void loop() {

}

  /*
  randomSeed(analogRead(0));
  myResult = random(0, 100);
  Serial.print("myResult:");
  Serial.println(myResult);
  */

  /*
  myCount++;
  Serial.print("myCount:");
  Serial.println(myCount);
  my5Count += 5;
  Serial.print("my5Count:");
  Serial.println(my5Count);
  myNegCount--;
  Serial.print("myNegCount:");
  Serial.println(myNegCount);
  */
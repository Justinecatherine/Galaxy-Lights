/*
 * 
 * Justine McIver
 * 200399163
 * December 6, 2019
 * CS207
 * Final Project
 * This Program controls many LEDs
 */


// variables
int ledPins[] = {A0,A1,A2,A3,A4};      // LED Pins
int sensor = 2;                   // Motion Sensor
int state = LOW;                  // Default set to no Motion detected
int value = 0;                    // sensor status storage
int delayTime[] = {30, 50, 5000, 100, 500, 700, 200, 250, 70, 150};

   


void setup() 
{
    Serial.begin(9600);

    for( int i = 0; i < 5; i++)        // initalize array of LED Pins as outputs
    {
       pinMode(ledPins[i], OUTPUT);      
    }
     
    pinMode(sensor, INPUT);    // initialize sensor as an input
}

void loop() 
{
      value = digitalRead(sensor);   // read sensor value
      

      if (value == HIGH)          // check if sensor detects Motion
      {   
        if (state == LOW) // if the state was LOW
        {
            Serial.println("Motion  has been detected!"); 
            state = HIGH;       // update the state to HIGH


            for (int counter = 0; counter < 4; counter++)
            {
                if (counter == 0)
                {
                  
                  ledEffects1();
                }
                else if(counter == 1)
                {
                  ledEffects2();
                }
                else if(counter == 2)
                {
                  ledEffects3();
                }
                else
                {
                  ledEffects4();
                  counter = 0;
                }
                 delay(delayTime[2]);      //delay time between sensing motion
            }
        }
      }
       else 
       {
            if (state == HIGH)
            {
                Serial.println("Motion has stopped!");
                state = LOW;       // update  state to LOW

                for( int i = 0; i < 5; i++)
                {
                    analogWrite(ledPins[i], LOW);
                }
            }
       }
      
}


void ledEffects1()// fade in and out in order
{
  Serial.println("Entering ledEffects1()");
  
  for(int i = 0; i < 5; i++)// fade in all led strings
  {
     for(int brightness = 0; brightness <= 255; brightness= brightness + 5) // if led is off increase brightness
    {
      Serial.println("fade in");
      Serial.println(i);
      analogWrite(ledPins[i], brightness); // set Brightness
      //delay(delayTime[0]);
    }
     delay(delayTime[1]);
     
   for(int brightness = 255; brightness >= 0; brightness = brightness - 5)
    {
      Serial.println("fade out");
       Serial.println(i);
      analogWrite(ledPins[i], brightness);  // set Brightness 
      delay(delayTime[0]);
    }
     delay(delayTime[1]);
  }
    Serial.println("Exiting ledEffects1()");
}

void ledEffects2()//random play through
{
  Serial.println("Entering ledEffects2()");
  for(int i = 0; i < 5; i++)
  {
    int randomLED = random(0,4);  //random led string selected
    int randomBrightness = random(0, 255);   //random value for max brightness
    int randomIncrement = random(1, 30);   //speed of fade in
    int randomDecrement = random(1,30);    //speed of fade out

    for(int i = 0; i <= randomBrightness; i += randomIncrement)
    {
       analogWrite(randomLED, i);
       delay(delayTime[0]);
    }
    for(int i = randomBrightness; i >= 0; i -= randomDecrement)
    {
      analogWrite(randomLED, i);
       delay(delayTime[0]);     
    }
  }
    Serial.println("Exiting ledEffects2()");
}


void ledEffects3() // created pattern
{
  Serial.println("Entering ledEffects3()");
   analogWrite(ledPins[4], 100);
   delay(delayTime[3]);
   analogWrite(ledPins[2], 50);
   delay(delayTime[0]);
   analogWrite(ledPins[3], 200);
   delay(delayTime[9]);
   analogWrite(ledPins[1], 10);
   delay(delayTime[1]);
   analogWrite(ledPins[0], 250);
   delay(delayTime[5]);
   analogWrite(ledPins[4], 255);
   delay(delayTime[8]);
   analogWrite(ledPins[0], 200);
   delay(delayTime[3]);
   analogWrite(ledPins[1], 180);
   delay(delayTime[4]);
   analogWrite(ledPins[4], 30);
   delay(delayTime[6]);
   analogWrite(ledPins[2], 150);
   delay(delayTime[8]);
   analogWrite(ledPins[3], 70);
   delay(delayTime[7]);
   analogWrite(ledPins[4], 200);
   delay(delayTime[0]);
   analogWrite(ledPins[0], 100);
   delay(delayTime[5]);
   analogWrite(ledPins[3], 250);
   delay(delayTime[0]);
   analogWrite(ledPins[2], 40);
   delay(delayTime[7]);
   analogWrite(ledPins[1], 80);
   delay(delayTime[1]);
   analogWrite(ledPins[3], 170);
   delay(delayTime[3]);

     Serial.println("Exiting ledEffects3()");
}

void ledEffects4() // turn on all leds
{
  Serial.println("Entering ledEffects4()");
  for( int i = 0; i < 5; i++)
  {
    analogWrite(ledPins[i], 255);
  }
  Serial.println("Exiting ledEffects4()");
}

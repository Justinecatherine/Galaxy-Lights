/*
 * 
 * Justine McIver
 * 200399163
 * December 6, 2019
 * CS207
 * Final Project
 * This Program controls many LEDs using analog Pins to create 4 different 
 * lighting effects that are triggered by a PIR motion sensor.
 */


// variables
int ledPins[] = {A0,A1,A2,A3,A4};      // LED Pins
int sensor = 2;                   // Motion Sensor
int state = LOW;                  // Default set to no Motion detected
int value = 0;                    // sensor status storage
int delayTime[] = {30, 50, 5000, 100, 500, 700, 200, 250, 70, 150, 1000,3};  // different delay times to control lighting effects
int counter = 0; // count number of times motion sensor has been activated to loop through different lighting effects


   


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

            
         if (counter == 0) // one at a time effects
                {
                  ledEffects1();
                  counter++;    //switch to next effect
                }
                else if(counter == 1)
                {
                  ledEffects2();
                  counter++;
                }
                else if(counter == 2)
                {
                  ledEffects3();
                  counter++;
                }
                else
                {
                  ledEffects4();
                  counter = 0;
      
                }
                 delay(delayTime[2]);      //delay time between sensing motion

   /*for (int counter = 0; counter < 4; counter++) //cycle through all effects
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
      
                }
                 delay(delayTime[2]);      //delay time between sensing motion
            }*/
            
        }
      }
       else 
       {
            if (state == HIGH)  // if motion sensor has stopped sensing motion turn off all LEDs
            {
                Serial.println("Motion has stopped!");
                state = LOW;       // update  state to LOW

                for( int i = 0; i < 5; i++)
                {
                    analogWrite(ledPins[i], LOW);//turn off all LEDs
                }
            }
       }
      
}


void ledEffects1()// fade in and out in order
{
  Serial.println("Entering ledEffects1()");  //for testing
  
  for(int j = 0; j < 4; j++)//loop through effect 3 times
  {
    for(int i = 0; i < 5; i++)// fade in all led strings
    {
      for(int brightness = 0; brightness <= 255; brightness++) // if led is off increase brightness
      { 
         analogWrite(ledPins[i], brightness); // set Brightness 
          delay(delayTime[11]);
      }
        for(int brightness = 255; brightness >= 0; brightness--) //fade out LEDs
        {
           analogWrite(ledPins[i], brightness);  // set Brightness 
            delay(delayTime[11]);
        }   
    }
       for(int i = 5; i > 0; i--)// fade in all led strings in reverse order
    {
      for(int brightness = 0; brightness <= 255; brightness++) // if led is off increase brightness
      { 
         analogWrite(ledPins[i], brightness); // set Brightness 
          delay(delayTime[11]);
      }
        for(int brightness = 255; brightness >= 0; brightness--)
        {
           analogWrite(ledPins[i], brightness);  // set Brightness 
            delay(delayTime[11]);
        }   
     }
     
  }
    Serial.println("Exiting ledEffects1()"); //for testing
}

void ledEffects2()//random play through
{
  Serial.println("Entering ledEffects2()"); // for testing
  
  for(int i = 0; i < 25; i++) // 
  {
    int randomLED = random(0,5);  //random led string selected
    int randomBrightness = random(100, 255);   //random value for max brightness
    
    Serial.print("led: ");          // for testing
    Serial.println(randomLED);    
    
    Serial.print("brightness: ");
    Serial.println(randomBrightness);
    
    analogWrite(ledPins[randomLED], randomBrightness);  // set random LED to random brightness
    
    delay(delayTime[10]);  //leave on for set time
    
    analogWrite(ledPins[randomLED], 0);   // turn off LED
  }
    Serial.println("Exiting ledEffects2()"); // for testing
}


void ledEffects3() // created pattern
{
  Serial.println("Entering ledEffects3()");// for testing 
  
  for(int i = 0; i < 3; i++) //run through effect twice
  {
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
  }
     
    for(int i = 0; i < 5; i++)
    {
        analogWrite(ledPins[i],0);                //turn off leds before exiting
    }

    Serial.println("Exiting ledEffects3()");      // for testing 
}

void ledEffects4() // turn on all leds
{
  Serial.println("Entering ledEffects4()");     // for testing
  
  for( int i = 0; i < 5; i++)                   // turn on al LEDs
  {
    analogWrite(ledPins[i], 255);
    delay(delayTime[3]);
  }
  Serial.println("Exiting ledEffects4()");      // for testing
}

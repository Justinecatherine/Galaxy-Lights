# Galaxy Lights
## Introduction
  Galaxy Lights is a project inpired by [Pu Gong Ying Tu (Dandelion Painting) by Jie Qi](http://technolojie.com/pu-gong-ying-tu-dandelion-painting/). However, in this project we will be creating a galaxy painting with stars using tiny LEDs. The stars, LEDs, will be turned on and create different lighting effects when motion is detected by a motion sensor.
  ![Finished Project Image](This PC/Documents/GalaxyLights/IMG_20191202_151526.jpg)
  
  
  ## Supplies
  1x [Arduino Uno](https://solarbotics.com/product/50450/)
  
  5x [560Ω resistors](https://solarbotics.com/product/r560ohm/)
  
  5x [battery operated LED light string with enameled covered wire](https://solarbotics.com/product/60600/)
  
  1x [PIR motion sensor](https://solarbotics.com/product/35185/)
  
  1x [battery holder](https://solarbotics.com/product/600060/)
  
  battery
  
  clear tape
  
  [wire](https://solarbotics.com/product/21052/)
  
  ### Optional
  [yupo paper](https://www.amazon.ca/Legion-Paper-L21YUP197WH1114-Watercolor-Polypropylene/dp/B0042SYLVK/ref=sr_1_7?keywords=yupo+paper&qid=1575586081&sr=8-7)
  
  [alcohol ink](https://www.amazon.ca/Ranger-THoltz-Alcohol-Beach-Deco/dp/B01IQA5AT6/ref=sr_1_17?keywords=alcohol+ink&qid=1575586117&sr=8-17) For more information on using Alcohol inks visit [here](https://www.youtube.com/watch?v=luGJtpf53m0).
  
  canvas (I got mine at Michaels)
  
  floating frame (I got mine at dollarama for $4)
  
  duct tape (I used pink coloured duct tape)
  
  ## Build
  1. I started this project by painting the picture I wanted yo use. I chose to paint a galaxy using 11-inch by 14-inch Yupo Paper and alcohol inks.
  2. I used a wire cutter to remove the LED string from the battery pack. I then used a match to burn off the enamel covering the ends of the wire. This step is nessisary in order to get a connection between the Arduino and the LED lights.
  3.I used a 11-inch by 14-inch sheet of cardstock to layout the position of the LED strings and secured them in place with clear tape. I cut slits in the paper and fed the ends of the LED strings through
  4. Since the left over wire was not long enough to rub to the Arduino I wrapped the ends of the LED string around an extended piece of wire and wrapped that in electrical tape.
  5.Upload the [code](https://github.com/Justinecatherine/Galaxy-Lights/blob/master/FinalPojectCS207.ino) to an Arduino Uno
  6. Folow schematic to build circuit. I placed the Arduino and breadboard behind the sheet of LEDs in a 11-inch by 14-inch canvas. I then taped the PIR motion sensor to the ouside of the canvas so that it would remain unobstructed.
  7. I placed the painting into the floating frame and the placed the LED sheet on top(behind) before securing in place with the metal tabs.
  8.Lastly I used duct tape to secure the canvas to the frame.
  
  ## Usage
  To use this project just secure to a wall or place vertically. To activate the motion sensory walk byor waving your hand. The code has four different lighting effects.Each activation of the motion sensor will cycle through 1 of these effects. There is also code that is commented out that will cycle through all effects with one activation of the motion sensor.
  ## Credits
  Jie Qi for the inspiration artwork http://technolojie.com/pu-gong-ying-tu-dandelion-painting/
  
  Radom Nerd Tutorials for the PIR motion sensor tutorial https://randomnerdtutorials.com/arduino-with-pir-motion-sensor/
  
  
  
  
  
  

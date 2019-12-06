# Galaxy Lights
## Introduction
  Galaxy Lights is a project inpired by [Pu Gong Ying Tu (Dandelion Painting) by Jie Qi](http://technolojie.com/pu-gong-ying-tu-dandelion-painting/). However, in this project we will be creating a galaxy painting with stars using tiny LEDs. The stars, LEDs, will be turned on and create different lighting effects when motion is detected by a motion sensor.
  ![Finished Project Image](https://user-images.githubusercontent.com/46509527/70285365-df73f400-178c-11ea-8168-87ab29d0bb6f.jpg)
  
  
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
  
  [alcohol ink](https://www.amazon.ca/Ranger-THoltz-Alcohol-Beach-Deco/dp/B01IQA5AT6/ref=sr_1_17?keywords=alcohol+ink&qid=1575586117&sr=8-17) 
  
  canvas (I got mine at Michael's)
  
  floating frame (I got mine at Dollarama for $4)
  
  duct tape (I used pink coloured duct tape)
  
  ## Build
  1. I started this project by painting the picture I wanted to use. I chose to paint a galaxy using 11-inch by 14-inch Yupo Paper and alcohol inks.For more information on using alcohol inks visit [here](https://www.youtube.com/watch?v=luGJtpf53m0).![Galaxy Painting Creation Image](https://user-images.githubusercontent.com/46509527/70285548-7a6cce00-178d-11ea-9ad5-247506430fd5.jpg)

  2. I used a wire cutter to remove the LED strings from their battery packs. I then used a match to burn off the enamel covering the ends of the wire. This step is necessary in order to get a connection between the Arduino and the LED lights.
  
  3. I used a 11-inch by 14-inch sheet of cardstock to layout the position of the LED strings and secured them in place with clear tape. I cut slits in the paper and fed the ends of the LED strings through.![LED strings taped to cardstock Image](https://user-images.githubusercontent.com/46509527/70285626-c455b400-178d-11ea-8c24-87421924a079.jpg)
  ![IMG_20191128_172241](https://user-images.githubusercontent.com/46509527/70286023-2531bc00-178f-11ea-8f24-4b13940bcdd4.jpg)
  
  4. Since the left over wire was not long enough to run to the Arduino I wrapped the ends of the LED string around an extended piece of wire and wrapped that in electrical tape.![extending wire Image](https://user-images.githubusercontent.com/46509527/70285669-ec451780-178d-11ea-929c-eddb63b437e3.jpg)
  
  5. Upload the [code](https://github.com/Justinecatherine/Galaxy-Lights/blob/master/FinalPojectCS207.ino) to an Arduino Uno.
  
  6. Follow the schematic to build circuit. I placed the Arduino and breadboard behind the sheet of LEDs in a 11-inch by 14-inch canvas. I then taped the PIR motion sensor to the ouside of the canvas so that it would remain unobstructed.
  ### PIR Motion Sensor
  - connect the Output pin to digitalpin D2
  
  - connect VCC pin to 5V
  
  - connect the GND pin to Ground
  
  
  ### LEDs
  - connect the control wires to analog pins A0, A1, A2, A3, and A4
  
  - connect ground wires to 560Ω resistors
  
  - connect 560Ω resistors to Ground
  
  ## Power
  - connect the positive wire to 5V 
  
  - connect ground wire to Ground
  
  
  ![Final Project schematic](https://user-images.githubusercontent.com/46509527/70285707-15fe3e80-178e-11ea-8740-0628f4bd9c65.jpg)
  ![breadboardFinalProject](https://user-images.githubusercontent.com/46509527/70285740-30d0b300-178e-11ea-8ab1-7a4783d381f8.png)
![IMG_20191128_173130](https://user-images.githubusercontent.com/46509527/70285776-4a71fa80-178e-11ea-8b62-a6a9f0617636.jpg)

  7. I placed the painting into the floating frame and the placed the LED sheet on top(behind) before securing in place with the metal tabs.
  ![IMG_20191128_173039](https://user-images.githubusercontent.com/46509527/70285815-70979a80-178e-11ea-9c99-8db8308147a0.jpg)
  ![IMG_20191128_173214](https://user-images.githubusercontent.com/46509527/70285834-7e4d2000-178e-11ea-86aa-d333fb4402e6.jpg)
  
  8. Lastly, I used duct tape to secure the canvas to the frame.
  
  
  ## Usage
  To use this project just secure to a wall or place vertically. To activate the motion sensory walk byor waving your hand. The code has four different lighting effects.Each activation of the motion sensor will cycle through 1 of these effects. There is also code that is commented out that will cycle through all effects with one activation of the motion sensor.
  
  ## Credits
  Jie Qi for the inspiration artwork http://technolojie.com/pu-gong-ying-tu-dandelion-painting/
  
  Radom Nerd Tutorials for the PIR motion sensor tutorial https://randomnerdtutorials.com/arduino-with-pir-motion-sensor/
  
  
  
  
  
  

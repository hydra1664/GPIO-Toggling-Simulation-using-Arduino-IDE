# GPIO Toggling with Arduino (Simulation on Wokwi)

This is a simple project where I experimented with GPIO toggling using an Arduino. Since I didn’t have physical hardware at hand, I used [Wokwi](https://wokwi.com) to simulate the behavior. The idea was to blink an LED by toggling a GPIO pin on and off at regular intervals.

## What this project does
- Turns an LED on for 1 second and then off for 1 second, repeatedly  
- Uses Arduino’s digitalWrite and delay functions to handle GPIO toggling  
- Simulated on Wokwi instead of actual hardware  

## Code
I’ve uploaded the embedded C code I used during the Wokwi simulation in the repository. You can check it out in the `Code` folder.

## Videos
I also recorded the simulation in action and uploaded the videos in the `Videos` folder. This shows exactly how the LED blinks in the Wokwi simulator.

## Wokwi Simulation
If you want to try it out directly, here’s the placeholder link to the Wokwi project:  
[Wokwi Project Link](https://wokwi.com/projects/434553002466603009)

## How it works
1. Pin 13 on the Arduino is set as an output  
2. The LED is connected to pin 13 (Wokwi has a built-in LED for this pin)  
3. In the loop, the LED is turned on for 1000ms, then off for 1000ms, creating a blinking effect  

## Why I made this
I wanted to start small and get familiar with GPIO control on Arduino before moving to more complex things. Even though it’s a basic project, simulating it on Wokwi was pretty helpful in understanding how GPIO toggling works without needing physical hardware.  

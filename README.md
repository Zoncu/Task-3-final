# Task-3-final
# Problem identification in Riga

In the center of Riga, for instance, in the areas of A. Čaka, K. Valdemāra, and Brīvības streets-elevated levels of air pollution (mainly PM2.5) are frequently observed, especially during rush hours and in the spring. Schools are required to ventilate classrooms regularly. However, opening windows at the wrong time allows smog and exhaust fumes to enter the classroom, which negatively impacts the well-being and concentration of the students.

# Research

Data from the Riga City Council and the VVD indicate that pollution levels fluctuate throughout the day. Teachers do not have the time during lessons to monitor air quality indices online.

There is potential demand for this product in educational institutions in the center of Riga, office spaces and for residential use.

Desired Functionality and Design: 
A compact physical device to be placed near a window, consisting of a programmable microcontroller with a visual status indicator...

Green light: Air is clean - safe to ventilate.

Yellow light: Moderate air pollution - limit ventilation time.

Red light: Air is polluted - do not open windows.

# Technical specification

Hardware:

Sensor SDS011 (laser dust sensor for measuring PM2.5).
Visualizer NeoPixel (WS2812B) LED ring (for visual indication).

Software:

C++ for device programming (reading sensor data, controlling LEDs, and transmitting data).

# Development method

Agile (Iterative approach);
This method allows for the rapid creation of a working prototype (MVP). Initially, only a device that reads data and changes the LED color will be built. If it proves unnecessary, the investment in the project will have been minimal. However, if it performs well and is deemed useful, Wi-Fi functionality and a web database can be added later.




# End-user documentation

Operating Instructions for the "Smart Ventilation Assistant" (VVA-1)


What is it?
The VVA-1 is an air quality monitor that analyzes outdoor air to help you decide whether it is safe to open classroom windows.

Installation:

-Place the device on the windowsill next to the window you plan to open. Extend the small tube (sensor intake) slightly outside the window or into a ventilation gap.
-Connect the device to a power source using the included USB cable.

How to Read the Signals:

Green light: Air is clean - safe to ventilate.
Yellow light: Moderate air pollution - limit ventilation time.
Red light: Air is polluted - do not open windows.

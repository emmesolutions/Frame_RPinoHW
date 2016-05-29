/*
Arduino Sketch Fnc_Debug
 
 Serial Print Debug
 
 Copyright (C) Martinelli Michele 2016 <michele@systemme.net>
 
 Fnc_Debug is free software: you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the
 Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 You should have received a copy of the GNU General Public License along
 with this program. If not, see <http://www.gnu.org/licenses/>.
 
 */

void Fnc_Debug()
{

  Serial.println("RaspbeeryPi+Aruino Hardware");
  Serial.println("Arduino Remote Control + RaspberryPi Web Interface");
  Serial.print("Version "); 
  Serial.println(Ino_Vers);
  Serial.println("-----------------------------------------------------------------------------");

  Serial.print("TimeUp: ");
  Serial.println(TimeSec);
  Serial.println();
  
  // Check RaspberryPi 
  Serial.print("RaspberryPi - ");
  if (!RPiGIO) Serial.print(" ON");
  if (RPiGIO) Serial.print(" OFF");
  Serial.println();
  
  Serial.println("-----------------------------------------------------------------------------");

}










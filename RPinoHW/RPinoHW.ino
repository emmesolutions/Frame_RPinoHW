/*

 Arduino Sketch RaspbeeryPi+Aruino Hardware
 
 Frame Module: Arduino Remote Control with RaspberryPi Web Interface
 
 08/03/2015
 Version 0.01
 
 ------------------------------------------------------------------------------
 Copyright (C) Martinelli Michele 2016 <michele@systemme.net>
 
 RPinoHW is free software: you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the
 Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 You should have received a copy of the GNU General Public License along
 with this program.  If not, see <http://www.gnu.org/licenses/>.
 ------------------------------------------------------------------------------
 
 Hardware:
 ARDUINO Mega 2560 (Hardware Control)
 RaspberryPi (Web Server Operator Command)
 Shield Ethernet
 
 Software:
 Library SPI
 Library Ethernet
 
 */

#include <SPI.h>
#include <Ethernet.h>      	// Web Server

// Web Server
byte mac[] = {
  0xEA, 0xAD, 0xBE, 0xEF, 0xDE, 0xBD };    	// MAC Address
EthernetServer server(80);                 	// Server Port

// PWM Output

// General I/O

// Analog Input

// Digital Input
#define RPiGIO_Pin 8 // RaspberryPi GPIO

// Digital Output


/* RPinoHW Settings */
String Ino_Vers = "0.01";          // Arduino Sketch Version
String RPi_IPAd = "192.168.0.120"; // RaspberryPi IP Address 
String RPi_Path = "/WM_RPinoWI";   // RaspberryPi WI Path 
int Set_TimeHrdw = 10;             // Time Hardware Ok
bool Set_Debug = true;             // Enable Debug
unsigned long Web_TimeOut = 60;	   // Web Comunication TimeOut


/* Arduino Variable */

// General
unsigned long TimeSec;        // Time Run Program
unsigned long Time00 = 1;     // Time Clock 1sec
unsigned long Time01 = 5;     // Time Clock 5sec
unsigned long Time02 = 10;    // Time Clock 10sec
unsigned long Wait00;         // Wait 00
unsigned long Wait01;         // Wait 01
unsigned long Wait02;         // Wait 02
unsigned long Wait03;         // Wait 03
unsigned long Wait10;         // Wait 10 Cycle Time
unsigned long Wait11;	        // Wait 11 RPi Link
unsigned long Wait60;         // Wait Battery Calculation
unsigned long LiPo_Atmy;      // LiPo Battery Autonomy (min)
unsigned long Web_TimeMax = 0;
bool Clock_00 = false;	       // Clock 1sec
bool Clock_01 = false;        // Clock 5sec
bool Clock_02 = false;        // Clock 10sec
bool Clock_10 = false;        // Clock Cycle Time
bool Clock_11 = false;        // Clock RPi Link
bool Flag_HdwOK = false;      // Hardware OK
bool OpCmd_Read = false;      // Web Interface Read Command
bool PrCmd_Read = false;      // Web Interface Read Command Parameter
bool OpMem [32];              // Operations Memory
bool OpCmd_Rd;                // Operator Command Read
unsigned int CmdSts;          // Command Status (00-15)
unsigned int InpSts;          // Digital Input Status
unsigned int OutSts;          // Digital Output Status

// Instruments Variable

// Analog Input Variable


// Digital Input Variable
bool RPiGIO;

// Digital Output Variable


// Commands Variable
int LastCmd;
char WebCmd_Chr [32] = { 
  "0123456789ABCDEFGHILMNOPQRSTUVZ" };
bool OpCmd_Rd0 [32];    // Operator Command Care On
bool OpCmd_Rd1 [32];    // Operator Command Execution
bool OpCmd_Wt0 [32];    // Operator Command Waiting Care On
int PrCmd_Rd0 [32];     // Command Parameter 


// System Allarm Variable
bool ChkAlm = false;
bool MsgAlm_00 [32];
int IdxAlm = 0;
// System Variable
int OprCmd=31;
int PrmCmd=0;
int MsgAlm=31;

/* Arduino Setup */

void setup()
{

  // Setup Ethernet Server
  Ethernet.begin(mac);
  server.begin();

  // Setup Serial Debug
  Serial.begin(115200);

  // Digital Input
  pinMode(RPiGIO_Pin, INPUT);

}

/* Arduino Main Loop */

void loop()
{

  // Function Loop
  Fnc_Loop ();

  // Read Analog Input


  // Read Digital Input
  RPiGIO = digitalRead(RPiGIO_Pin);

  // Data Calculations
  // Fnc_DataClc ();

  // Web Comunication
  // Web_Com ();


  // Serial Print Debug
  if (Clock_00){
  if (Set_Debug) Fnc_Debug ();
  }

}



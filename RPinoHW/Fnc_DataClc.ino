/*
Arduino Sketch Fnc_DataClc
 
 Data Calculations
 
 Copyright (C) Martinelli Michele 2016 <michele@systemme.net>
 
 This is free software: you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the
 Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 You should have received a copy of the GNU General Public License along
 with this program. If not, see <http://www.gnu.org/licenses/>.
 
 */

void Fnc_DataClc () {


  // Digital Input Status Calculation
  InpSts = 0;
  // if (BlTFll) InpSts = InpSts + 2;
  // if (BlTEpt) InpSts = InpSts + 4;
  // if (FloodS) InpSts = InpSts + 8;
  // if (CllSrW) InpSts = InpSts + 16;
  // if (CllSrN) InpSts = InpSts + 32;
  // if (CllSrT) InpSts = InpSts + 64;
  // if (CllSrD) InpSts = InpSts + 128;
  // if (RPiGIO) InpSts = InpSts + 256;

  // Digital Output Status Calculation
  OutSts = 0;    
  // if (AuxLgt) OutSts = OutSts + 4;

}






**[Frame_RpinoHW]** <br />
**Frame Module: Arduino Remote Control with RaspberryPi Web Interface**<br />
<br />
**Develop Version 0.01**<br />

 Copyright (C) 2016 Martinelli Michele

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.


**Changelog**

**0.01** 
* Start Project


##System Structure:

**ARDUINO**
Main Controller
- Function...
- Web Comunication Function
     Send Satus Data via GET method:
  	http://..../index.php?TimeSc=...&DateD=...&DateM=...

**Status Data:**
	
       	TimeSc Time On
       	...

**Arduino Read Instruction Data via GET method:**
Instruction Data = OpCmd (Operator Command) + PrCmd (Parameter Command)
- 	'$' Read OpCmd (Operator Command)
- 	'@' Read PrCmd (Parameter Command)
- 	OpCmd_Rd0 Op.Command Care On
- 	OpCmd_Wt0 Waiting Care On
- 	PrCmd_Rd0 Calculation Parameter
- 	OpCmd_Rd0 + OpCmd_Wt0 = OpCmd_Rd1 Op.Command Execution

**RASPBERRY PI**
Web Server for Operator Command Web Interface
-  RaspberryPi Read Instruction Data via GET method:
-  Instruction Data = OpCmd (Operator Command) + PrCmd (Parameter Command)
-  Send Instruction Data via GET method
	http://..../index.php?$[OpCmd]@[OpCmd Parameter]

**OpCmd List:**
	
	...

--

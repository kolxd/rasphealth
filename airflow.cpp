/*  
 *  eHealth sensor platform for Arduino and Raspberry from Cooking-hacks.
 *  
 *  Copyright (C) Libelium Comunicaciones Distribuidas S.L. 
 *  http://www.libelium.com 
 *  
 *  This program is free software: you can redistribute it and/or modify 
 *  it under the terms of the GNU General Public License as published by 
 *  the Free Software Foundation, either version 3 of the License, or 
 *  (at your option) any later version. 
 *  a
 *  This program is distributed in the hope that it will be useful, 
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License 
 *  along with this program.  If not, see http://www.gnu.org/licenses/. 
 *  
 *  Version:           2.0
 *  Design:            David Gascón 
 *  Implementation:    Luis Martin & Ahmad Saad
 */

//Include eHealth library
#include "eHealth.h"

void loop() {
	int air = eHealth.getAirFlow();
	eHealth.airFlowWave(air);
	delay(50);
}

int main (){
	while(1){
		loop();
	}
	return (0);
}
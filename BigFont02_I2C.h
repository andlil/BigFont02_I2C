#ifndef BigFont02_I2C_h
#define BigFont02_I2C_h

#include "Arduino.h"
#include "LiquidCrystal_I2C.h"

class BigFont02_I2C {
	public:
		BigFont02_I2C(LiquidCrystal_I2C*);
		void begin();
		int  writechar(int, int, char);                // col, row, single ascii character
		void clear(int, int);                          // col, row
		void writeint (int, int, int, uint8_t, bool);  // col, row, number to display, digits, leading 
	private:
		LiquidCrystal_I2C* _lcd;
};

#endif
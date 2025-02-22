/*
 * SoundSpeed.h
 *
 * Manages the sound speed objects and calls EOS
 *
 *  Created on: 10 Apr 2021
 *      Author: Mary-Ann Maheswaran
 */

#include "PhysicalProperty.h"

#ifndef SOUNDSPEED_H_
#define SOUNDSPEED_H_


class SoundSpeed2 : public PhysicalProperty {


public:

	void updateSoundSpeed(const vector<double> &energy);
	void print();

};


/**
 * EOS substitute for now
 */
void SoundSpeed2::updateSoundSpeed(const vector<double> &energy) {


	for (int i= 0; i < data.size(); i++) {
		double eint = energy[i]; //random ideal EOS need getEOS call
		double gamma = 1.4;
		data[i] = gamma * (gamma - 1.) * eint;
	}
}


/**
 * Print the contents of array.
 *
 */
void SoundSpeed2::print() {

   vector<double>::iterator it;
   cout << "Sound speed: ";
   for (it = data.begin(); it != data.end(); ++it) {
       cout<<*it<<" ";
   }
   cout << "\n";

}



#endif /* SOUNDSPEED_H_ */

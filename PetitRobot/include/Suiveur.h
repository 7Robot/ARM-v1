#ifndef _SUIVEUR_H_
#define _SUIVEUR_H_

#include "Mission.h"

class Suiveur: public Mission
{
	public:
		Suiveur();
		void run();
		static void lineCaptorAnswer(int exleft, int left, int right, int exright);

	private:

};

#endif

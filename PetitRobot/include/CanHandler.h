#include "libcan.h"

class CanHandler
{
	public:
		CanHandler();
		void send(int id);
		static void recv(struct libcan::can_t packet);
	
};

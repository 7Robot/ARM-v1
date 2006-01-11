#include <stack>

#include "CallbackSet.h"

class CallbackHandler
{
	public:
		CallbackHandler();
		void apply(CallbackSet * cbs);
		void remove();
		//void pop(bool deleteSet);

	private:
		std::stack<CallbackSet> pile;
};

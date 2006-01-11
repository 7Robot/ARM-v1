#ifndef _CALLBACK_SET_H_
#define _CALLBACK_SET_H_

struct callback {
	void (*sharpAnswer)(int sharpID, int sharpValue);
	void (*lineCaptorAnswer)(int exleft, int left, int right, int exright);
};

class CallbackSet
{
	public:
		CallbackSet();
		struct callback cb;
		//void (*sharpAnswer)(int sharpID, int sharpValue);
		//void (*lineCaptorAnswer)(int exleft, int left, int right, int exright);

};

#endif

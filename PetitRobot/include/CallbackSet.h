#ifndef _CALLBACK_SET_H_
#define _CALLBACK_SET_H_

struct callback {
	void (*sharpAnswer)(int sharpID, int sharpValue);
	int sharpInt;
	void (*lineCaptorAnswer)(int exleft, int left, int right, int exright);
	int lineCaptorInt;
};

class CallbackSet
{
	public:
		CallbackSet();
		CallbackSet(bool warning);
		struct callback cb;
		static void sharpAnswer(int sharpID, int sharpValue);
		static void lineCaptorAnswer(int exleft, int left, int right, int exright);

};

#endif

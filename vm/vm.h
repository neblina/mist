#ifndef _VM_H_
#define _VM_H_

#include "types.h"

class MCell {
    public:
	MCell (){}
	~MCell (){}

	void set_id(MCellId lid);
	MCellId get_id();

	void set_state(MCellState lstate);
	MCellState get_state();
	

    private:
	MCellId id;
	MCell* output;
	MCell* inputA, *inputB;
	MCellState state;
	
};






#endif

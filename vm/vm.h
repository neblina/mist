#ifndef _vmh_
#define _vmh_

#include <iostream>
#include <queue>
using namespace std;



class State {
    int value;
};

class Name {
    string value;
};

class Code {
    
};

class Message {
    int value;
};

class Cell {
    public:
	Cell *out, *ina,*inb;
	queue<Message> qout,qina,qinb;
	State state;
	Name name;
	Code code;
	
	void set_name(Name n);
	void set_state(State s);
	
	void connect_out_to_ina(Cell* cell);
	void connect_out_to_inb(Cell* cell);
	void connect_ina_to_out(Cell* cell);
	void connect_inb_to_out(Cell* cell);
	
	void run_single_instruction();
};

class Bucket {};




#endif

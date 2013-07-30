#ifndef _vmh_
#define _vmh_

#include <iostream>
#include <queue>
using namespace std;


class Code {};

class Cell {
	int id;
	int state;
	Code code;
};

class Bucket {
    queue<Cell*> list;
};

class Packet {
    int from,to;
    int toin;
    int fromout;
    int message;
};


#endif

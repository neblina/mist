#include "vm.h"


MCellId MCell::get_id() {
    return this->id;
}

void MCell::set_id(MCellId lid){
    this->id = lid;
}

MCellState MCell::get_state(){
    return this->state;
}

void MCell::set_state(MCellState lstate){
    this->state = lstate;
}



int main() {
    return 0;
}

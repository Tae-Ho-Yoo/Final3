#include <iostream>
#include <cassert>
#include "TransparentStack.h"

using namespace std;

void TestPeekat(){
	TransparentStack<T> s = new TransparentStack<T>;
	
	s->push(1);
	s->push(2);
	s->push(3);
	
	assert(s->peek_at(1) == 2);
}

int main(){
	TestPeekat();
	
	return 0;
}


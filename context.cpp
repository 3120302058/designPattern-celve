/*
 *
 *
 */
#include "context.h"
#include <iostream>

using namespace std;

Context::Context(Strategy *stg){
	_stg = stg;
	cout << "call Context()" << endl;
}

Context::~Context(){
	cout << "call ~Context()" << endl;
	if(_stg != NULL){
		delete _stg;
	}
}

void Context::doAction(){
	_stg->Action();
}

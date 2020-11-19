/*
 *
 */
#include "strategy.h"
#include "context.h"
#include <iostream>

using namespace std;

void callNewInterface()
{
	return;
}

int main(int argc, char *argv[]){
	Strategy *ps = new ConcreteStrategyA();
	Context *pc = new Context(ps);	
	pc->doAction();
	if(NULL != pc){
		delete pc;
	}
	return 0;		
}

/*
 *
 */
#include "strategy.h"
#include "context.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
#ifdef MYDEBUG
	cout << "g++ -D debug..." << endl;
#endif		
	Strategy *ps = new ConcreteStrategyA();
	Context *pc = new Context(ps);	
	pc->doAction();
	if(NULL != pc){
		delete pc;
	}
	return 0;		
}

/*
 * filename:test.cpp
 * author:yinxh
 * data:10/11/2020
 * description:test for celv design pattern
 * other:none
 *xxxxxxxxxxxxxxxxxxxxxxxxxxxx
 */
#include "strategy.h"
#include "context.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	Strategy *ps = new ConcreteStrategyA();
	Context *pc = new Context(ps);	
	pc->doAction();
	if(NULL != pc){
		delete pc;
	}
	return 0;		
}

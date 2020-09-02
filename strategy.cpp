/*
 *
 *
 */
#include <iostream>
#include "strategy.h"

using namespace std;

Strategy::Strategy(){
	cout << "call Strategy()" << endl;
}		

Strategy::~Strategy(){
	cout << "call ~Strategy()" << endl;
}		


ConcreteStrategyA::ConcreteStrategyA(){
	cout << "call ConcreteStrategyA()" << endl;
}		

ConcreteStrategyA::~ConcreteStrategyA(){
	cout << "call ~ConcreteStrategyA()" << endl;
}		

void ConcreteStrategyA::Action(){
	cout << "call ConcreteStrategyA::Action()" << endl;
}

ConcreteStrategyB::ConcreteStrategyB(){
	cout << "call ConcreteStrategyB()" << endl;
}		

ConcreteStrategyB::~ConcreteStrategyB(){
	cout << "call ~ConcreteStrategyB()" << endl;
}		

void ConcreteStrategyB::Action(){
	cout << "call ConcreteStrategyB::Action()" << endl;
}

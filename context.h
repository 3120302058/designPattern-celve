/*
 *
 *
 */
#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "strategy.h"

class Context{
	public:
		Context(Strategy *stg);
		~Context();
		void doAction();
	protected:
	private:
		Strategy *_stg;
};
#endif

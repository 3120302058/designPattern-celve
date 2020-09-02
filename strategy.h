/*
 * 
 *
 */
#ifndef _STRATEGY_H_
#define _STRATEGY_H_
class Strategy{
    public:
        Strategy();
        virtual ~Strategy();
        virtual void Action() = 0;
    protected:
    private:            

};
class ConcreteStrategyA:public Strategy{
	public:
		ConcreteStrategyA();
		~ConcreteStrategyA();
		void Action();
	protected:
	private:
};
class ConcreteStrategyB:public Strategy{
	public:
		ConcreteStrategyB();
		~ConcreteStrategyB();
		void Action();
	protected:
	private:
};
#endif

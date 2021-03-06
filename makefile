CXX = g++
TARGET = app

OBJS = strategy.o \
	   context.o \
	   test.o

CXXFLAGS = -D MYDEBUG \
		  -g \

$(TARGET) : $(OBJS)
	$(CXX) $(OBJS) -o app

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $^ -o $@

clean:
	rm -vf $(OBJS) app

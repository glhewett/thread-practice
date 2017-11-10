CPP=g++
LD=g++
CPPFLAGS=-Wall -g -std=c++11
LIBS=
OBJS = thread-practice.o counter.o app_state.o


thread-practice: $(OBJS)
	$(LD) $(LDFLAGS) $(LIBS) $(OBJS) -o $@

thread-practice.o: thread-practice.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

counter.o: counter.cpp counter.h
	$(CPP) $(CPPFLAGS) -c $< -o $@

app_state.o: app_state.cpp app_state.h
	$(CPP) $(CPPFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJS) thread-practice

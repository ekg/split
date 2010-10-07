all: splittest jointest

splittest: splittest.cpp split.h
	g++ splittest.cpp split.cpp -o splittest

jointest: jointest.cpp join.h
	g++ jointest.cpp -o jointest

clean:
	rm -f jointest splittest

.PHONY: all clean

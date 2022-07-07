main: main.cpp
	$(CXX) main.cpp -Wall -o caesar
install:
	$(CXX) main.cpp -Wall -o caesar
	mv caesar /usr/bin
clean:
	rm -rf caesar

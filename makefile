# Nice syntax reminder here: https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html

# compiler
CC = g++

# compiler flags:
CFLAGS  = -g -Wall

compiled/all: src/*.cpp src/utils/stats.cpp src/utils/numerical.cpp
	g++ src/*.cpp src/utils/stats.cpp src/utils/numerical.cpp -o compiled/all

#$(TARGET): src/$(TARGET).cpp
#	$(CC) $(CFLAGS) -o $(TARGET) src/$(TARGET).cpp 

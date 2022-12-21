# Nice syntax reminder here: https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html

# compiler
CC = g++

# compiler flags:
CFLAGS  = -g -Wall

# the build target executable:
TARGET = 01

all: $(TARGET)

01: 01.cpp utils/stats.cpp utils/numerical.cpp
	g++ 01.cpp utils/stats.cpp utils/numerical.cpp -o 01
#$(TARGET): src/$(TARGET).cpp
#	$(CC) $(CFLAGS) -o $(TARGET) src/$(TARGET).cpp 

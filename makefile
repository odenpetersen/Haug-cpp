# Nice syntax reminder here: https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html

# compiler
CC = g++

# compiler flags:
CFLAGS  = -g -Wall

compiled/$(CHAPTER): src/$(CHAPTER).cpp src/utils/stats.cpp src/utils/numerical.cpp
	g++ src/$(CHAPTER).cpp src/utils/stats.cpp src/utils/numerical.cpp -o compiled/$(CHAPTER)

#$(TARGET): src/$(TARGET).cpp
#	$(CC) $(CFLAGS) -o $(TARGET) src/$(TARGET).cpp 

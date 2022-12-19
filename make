# Nice syntax reminder here: https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html

# compiler
CC = g++

# compiler flags:
CFLAGS  = -g -Wall

# the build target executable:
TARGET = 

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)

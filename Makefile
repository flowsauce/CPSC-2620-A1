#the compiler: gcc for C program, defined as g++ for C++
CC = g++

#compiler flags
#-g adds debugging information to the executable file
#-Wall turns on most, but not all, compiler warnings
CFLAGS = -g -Wall

#the build target exectuable
TARGET = test_movie
MOVIE = movie
TEST_MOVIE = test_Movie

all: $(TARGET)

$(TARGET): $(MOVIE).o $(TEST_MOVIE).o
	$(CC) $(CFLAGS) -o $(TARGET) $(MOVIE).o $(TEST_MOVIE).cpp

$(MOVIE).o: $(MOVIE).cpp $(MOVIE).h
	$(CC) $(CFLAGS) -c $(MOVIE).cpp

$(TEST_MOVIE).o: $(MOVIE).cpp $(MOVIE).h
	$(CC) $(CFLAGS) -c $(TEST_MOVIE).cpp

clean:
	$(RM) -f $(TARGET) $(MOVIE).o $(TEST_MOVIE).o


CC=g++
CFLAGS=  
LDFLAGS=
HEADERS =
SOURCES= test.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE= name

all: $(SOURCES) $(EXECUTABLE)
       
$(EXECUTABLE): $(OBJECTS)
		$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -rf *.o
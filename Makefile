CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Main.o

LIBS =

TARGET =	Main

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

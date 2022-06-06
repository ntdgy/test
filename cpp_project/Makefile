INCLUDE = /usr/local/include/opencv4 #opencv的include头文件路径
LIBS = /usr/local/lib #opencv的lib库文件路径
OTHERLIB= -lopencv_core -lopencv_imgproc -lopencv_highgui #其他依赖库
SOURCES = test.cpp #源文件
#SOURCES = Demo.cpp a.cpp b.cpp c.cpp pch.cpp #也可以写成这种形式
# 目标文件
OBJECTS = test.o #先生成目标文件.o
# 可执行文件
TARGET =test #生成的可执行文件名称
$(TARGET):$(OBJECTS)
	g++ -fopenmp -o $(TARGET) $(OBJECTS) -I $(INCLUDE)  $(OTHERLIB) -std=c++11
$(OBJECTS):$(SOURCES)
	g++ -fopenmp -c $(SOURCES) -I $(INCLUDE)  $(OTHERLIB) -std=c++11
clean:
	rm *.gch $(OBJECTS) $(TARGET)
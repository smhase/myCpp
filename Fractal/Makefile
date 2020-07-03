output: main.o bitmap.o mandelbrot.o zoom.o zoomlist.o
	g++ main.o bitmap.o mandelbrot.o zoom.o zoomlist.o -o output

main.o: main.cpp
	g++ -c main.cpp

bitmap.o: bitmap.cpp
	g++ -c bitmap.cpp

mandelbrot.o: mandelbrot.cpp
	g++ -c mandelbrot.cpp

zoom.o: zoom.cpp
	g++ -c zoom.cpp

zoomlist.o: zoomlist.cpp
	g++ -c zoomlist.cpp
clean:
	rm *.o
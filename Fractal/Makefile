output: main.o bitmap.o mandelbrot.o
	g++ main.o bitmap.o mandelbrot.o -o output

main.o: main.cpp
	g++ -c main.cpp

bitmap.o: bitmap.cpp
	g++ -c bitmap.cpp

mandelbrot.o: mandelbrot.cpp
	g++ -c mandelbrot.cpp

clean:
	rm *.o
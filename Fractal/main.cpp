#include <iostream>
#include <math.h>
#include <cstdint>
#include <iostream>
#include <fstream>
#include <memory>
#include "bitmap.h"
#include "mandelbrot.h"
#include "zoomlist.h"
#include "fractalCreator.h"
using namespace std;
using namespace zero;

int main() {

	int const WIDTH = 800;
	int const HEIGHT = 800;
	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 999999;
	double max = -999999;

	ZoomList zoomList(WIDTH, HEIGHT);
	zoomList.add(Zoom(WIDTH/2, HEIGHT/2, 0.10/WIDTH));

	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]());
	unique_ptr<int[]> fractal(new int[WIDTH*HEIGHT]());
	
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {

			pair<double, double> coords = zoomList.doZoom(x, y);
			
			int iterations = Mandelbrot::getIterations(coords.first, coords.second);
			fractal[y * WIDTH + x] = iterations;
			if(iterations !=Mandelbrot::MAX_ITERATIONS){
				histogram[iterations]++;
			}
			
		}
	}

	int total = 0;
	for (int i = 0; i <= Mandelbrot::MAX_ITERATIONS; i++) {
		total += histogram[i];
	}
	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			
			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;

			int iterations = fractal[y * WIDTH + x];
			double hue = 0.0;

			if (iterations != Mandelbrot::MAX_ITERATIONS) {
				for (int i = 0; i <= iterations; i++) {
					hue += ((double)histogram[i] / total);
				}

				green = pow(255, hue);
				bitmap.setPixel(x, y, red, green, blue);
			}
		}
	}
	

	bitmap.write("test.bmp");

	cout << "@@Finished!!" << endl;
	return 0;
}

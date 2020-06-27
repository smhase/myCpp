#include <iostream>
#include "bitmap.h"
#include "mandelbrot.h"
#include <cstdint>
#include <iostream>
#include <fstream>
#include <memory>


using namespace std;
using namespace zero;

int main() {

	int const WIDTH = 800;
	int const HEIGHT = 800;
	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 999999;
	double max = -999999;

	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS + 1]());

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (x - WIDTH / 2 - 200) * 2.0 / WIDTH; /* Scaling the x value which goes from 0 to WIDTH to new range which is -1 to 1*/
			double yFractal = (y - HEIGHT / 2) * 2.0 / HEIGHT; /* Scaling the y value which goes from 0 to HEIGHT to new range which is -1 to 1*/

			int iterations = Mandelbrot::getIterations(xFractal, yFractal);

			histogram[iterations]++;

			uint8_t base_color = (uint8_t)(256 * (double)iterations / Mandelbrot::MAX_ITERATIONS);

			uint8_t color = base_color * base_color * base_color;

			bitmap.setPixel(x, y, 0, color, 0);
			if (color < min) min = color;
			if (color > max) max = color;
		}

	}

	cout << min << ", " << max << endl;

	cout << endl;

	for (int i = 0; i <= Mandelbrot::MAX_ITERATIONS; i++)
	{
		cout << histogram[i] << " " << flush;
		cout 
	}
	cout << endl;

	bitmap.write("test.bmp");

	cout << "@@Finished!!" << endl;
	return 0;
}

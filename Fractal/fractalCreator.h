#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include "zoom.h"

using namespace std;

namespace zero {

	class FractalCreator {
	public:
		FractalCreator(int width, int height);
		virtual ~FractalCreator();

		void calculateIteration();
		void drawFractal();
		void writeBitmap(string name);
		void addZoom(const Zoom& zoom);

	};

}

#endif
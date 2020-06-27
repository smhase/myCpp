#include <fstream>
#include "bitmap.h"
#include "bitmapFileHeader.h"
#include "bitmapInfoHeader.h"

using namespace zero;
using namespace std;

namespace zero {

	Bitmap::Bitmap(int width, int height) : m_width(width), m_height(height), m_pPixels(new uint8_t[width * height * 3]{}) { /* With {} brackets the values are initialized to zero */
	}

	bool Bitmap::write(string filename) {
		BitMapFileHeader fileHeader;
		BitmapInfoHeader infoHeader;

		fileHeader.fileSize = sizeof(BitMapFileHeader) + sizeof(BitmapInfoHeader) + m_width * m_height * 3; /* Tell the size of the whole file (Not really clear)*/
		fileHeader.dataOffset = sizeof(BitMapFileHeader) + sizeof(BitmapInfoHeader); /* Tell from where it is started (Not really clear)*/

		infoHeader.width = m_width;
		infoHeader.height = m_height;

		ofstream file;

		file.open(filename, ios::out | ios::binary); /* | this gives the flag to tell that the output is binary*/

		if (!file) {
			return false;
		}

		file.write((char*)&fileHeader, sizeof(fileHeader));
		file.write((char*)&infoHeader, sizeof(infoHeader));
		file.write((char*)m_pPixels.get(), m_width * m_height * 3); /* size of total is area of total into size of each pixel viz is 3 */

		file.close();

		return true;
	}

	void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
		uint8_t* pPixel = m_pPixels.get();
		pPixel += (y*3) * m_width + (x*3); /* This will be the position of pixel. When each pixel size is 3 bytes */

		pPixel[0] = blue;
		pPixel[1] = green;
		pPixel[2] = red;

	}
	
	Bitmap::~Bitmap() {
	
	}
}
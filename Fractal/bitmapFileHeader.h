#ifndef BITMAPFILEHEADER_H_ /* This code is to manage cases when this header file gets included multiple times*/
#define BITMAPFILEHEADER_H_

#include <cstdint> /* This is to make sure that the integer is fur sure 32 bits*/

using namespace std;

#pragma pack(2) /* This is to tell that don't add extra padding to struct. This is important because compiler do this by default and if done our bitmap will be no like the way we want*/

namespace zero {
	struct  BitMapFileHeader {
		char header[2]{ 'B','M' };
		int32_t fileSize;
		int32_t reserved{ 0 };
		int32_t dataOffset;
	};
}

#endif
#include <stdio.h>

typedef struct {
	//uint16_t bfType;
	uint32_t bfSize;
	uint16_t bfReserved1;
	uint16_t bfReserved2;
	uint32_t bfOffBits;
	uint32_t biSize;
	uint32_t biWidth;
	uint32_t biHeight;
	uint16_t biPlanes;
	uint16_t bitBitCount;
	uint32_t biCompression;
	uint32_t biSizeImage;
	uint32_t biXPelsPerMeter;
	uint32_t biYPelsPerMeter;
	uint32_t biClrUsed;
	uint32_t biClrImportant;
}BitmapStructTypeDef;

int main(int argc, char** argv) {
	
	FILE * fp1 = fopen("bitmap.bmp", "rb");
	
	if(fp1==NULL)
	{
		printf("파일을 열 수 없습니다.\n");
	}
	
	return 0;
}

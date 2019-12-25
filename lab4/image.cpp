#include "image.h"

void image::image_proc(){
	if(i_rd.read() == 1){
		Pixel = ROM[i_addr.read()];
	}
}

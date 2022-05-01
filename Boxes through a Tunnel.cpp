

struct box
{
	int length, width, height;
	/**
	* Define three fields of type int: length, width and height
	*/
};

typedef struct box box;

int get_volume(box b) {

	int result = b.length * b.width * b.height;
	return result;
	/**
	* Return the volume of the box
	*/
}

int is_lower_than_max_height(box b) {
	if (b.height >= MAX_HEIGHT) {

		return 0;

	}
	return 1;

	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}


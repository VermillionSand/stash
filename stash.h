#ifndef STASH_H
#define STASH_H
class Stash {
	int size; // size of each space 
	int quantity; // number of storage spaces
	int next; // 
	//dynamically allocated  array of bytes:
	unsigned char* storage;
	void inflate(int increse);
public:
	Stash(int size);
	Stash(int size, int initQuantity);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count();
};

#endif

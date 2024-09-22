unsigned long next = 1;

unsigned rand0(void){
	next = next * 1103535245  + 12345;
	return (unsigned)(next >> 16) % 32768;
}

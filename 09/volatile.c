main() {
  volatile -int i=4;
  int j=5;
	
	int *p;
	p = &j;
  *p=7;

	p++; *p=100;

	printf("i=%d, j=%d\n", i, j);

}

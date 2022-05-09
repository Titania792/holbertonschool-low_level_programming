echo "int srand(void *p){return (0);}int idx = 0;int rand(void){int list[] = {9, 8, 10, 24, 75, 9};idx++;return (list[idx]);}" > /root/injected.c
gcc -fPIC --shared /root/injected.c -o /root/injectedlib.so
export LD_PRELOAD=/root/injectedlib.so

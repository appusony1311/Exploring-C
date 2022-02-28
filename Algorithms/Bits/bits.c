
//bits.c

//Macro to set a bit
#define bitset(byte,nbit)   ((byte) |=  (1<<(nbit)))

//Toggle a bit
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))

//Clear a bit
#define bitclear(byte,nbit) ((byte) &= ~(1<<(nbit)))
#define bitflip(byte,nbit)  ((byte) ^=  (1<<(nbit)))

//Checking if bit at nth position is set or not
#define bitcheck(byte,nbit) ((byte) &   (1<<(nbit)))

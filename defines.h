//defines.h
#ifndef _DEFINES_H
#define _DEFINES_H

#define SETBIT(WORD,BITPOS) (WORD |= (1<<BITPOS))
#define CLRBIT(WORD,BITPOS) (WORD &= ~(1<<BITPOS))
#define CPLBIT(WORD,BITPOS) (WORD ^= (1<<BITPOS))
#define READBIT(WORD,BITPOS) ((WORD>>BITPOS)&1)

#define SSETBIT(WORD,BITPOS) (WORD = 1<<BITPOS)	//used for IOSET SFR
#define SCLRBIT SSETBIT	//used for IOCLR SFR

#define WRITEBYTE(WORD,SBITPOS,DATA) \
(WORD = ((WORD&~(255<<SBITPOS)) | (DATA<<SBITPOS)))

#endif

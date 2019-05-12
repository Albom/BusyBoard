#include "pitches.h"

#define DF 1
#define DH 2
#define DQ 4
#define DE 8
#define DHX 16

#define NP -1
#define NEND  0

#define NC3 1
#define NCS3 2
#define ND3 3
#define NDS3 4
#define NE3 5
#define NF3 6
#define NFS3 7
#define NG3 8
#define NGS3 9
#define NA3 10
#define NAS3 11
#define NB3 12
#define NC4 13
#define NCS4 14
#define ND4 15
#define NDS4 16
#define NE4 17
#define NF4 18
#define NFS4 19
#define NG4 20
#define NGS4 21
#define NA4 22
#define NAS4 23
#define NB4 24
#define NC5 25
#define NCS5 26
#define ND5 27
#define NDS5 28
#define NE5 29
#define NF5 30
#define NFS5 31
#define NG5 32
#define NGS5 33
#define NA5 34
#define NAS5 35
#define NB5 36
#define NC6 37


const PROGMEM int NOTES[] = {
  NOTE_C3,
  NOTE_CS3,
  NOTE_D3,
  NOTE_DS3,
  NOTE_E3,
  NOTE_F3,
  NOTE_FS3,
  NOTE_G3,
  NOTE_GS3,
  NOTE_A3,
  NOTE_AS3,
  NOTE_B3,
  NOTE_C4,
  NOTE_CS4,
  NOTE_D4,
  NOTE_DS4,
  NOTE_E4,
  NOTE_F4,
  NOTE_FS4,
  NOTE_G4,
  NOTE_GS4,
  NOTE_A4,
  NOTE_AS4,
  NOTE_B4,
  NOTE_C5,
  NOTE_CS5,
  NOTE_D5,
  NOTE_DS5,
  NOTE_E5,
  NOTE_F5,
  NOTE_FS5,
  NOTE_G5,
  NOTE_GS5,
  NOTE_A5,
  NOTE_AS5,
  NOTE_B5,
  NOTE_C6
};

const PROGMEM int scale[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_G5, NOTE_C6};
const PROGMEM char bell[] = {NC5, DHX, NF5, DHX, NEND};
const PROGMEM char friendship[] = {
  NA4, DH, ND4, DH,
  ND4, DQ, NCS4, DQ, NE4, DH,
  NAS4, DH, NE4, DH, NE4, DQ, ND4, DQ, NF4, DH,
  NC5, DH, NFS4, DH, NA4, DQ, NG4, DQ, NG4, DH,
  NF4, DQ, NE4, DQ, ND4, DQ, NC4, DQ, NA4, DH, NP, DH,
  ND5, DQ, NA4, DQ, NGS4, DQ, NA4, DQ,
  NC5, DH, NAS4, DH,
  NC5, DQ, NG4, DQ, NFS4, DQ, NG4, DQ,
  NAS4, DH, NA4, DH,
  NAS4, DQ, NE4, DQ, NF4, DQ, NG4, DQ,
  NG4, DQ, NF4, DQ, NE4, DQ, ND4, DQ,
  ND4, DH, NCS4, DH, NA4, DH, NP, DH,
  NAS4, DQ, NE4, DQ, NF4, DQ, NG4, DQ,
  NG4, DQ, NF4, DQ, NE4, DQ, ND4, DQ,
  ND4, DH, NCS4, DH, ND4, DH,
  NEND
};

const PROGMEM char oldMcDonald[] = {
  NF5, DQ, NF5, DQ, NF5, DQ, NC5, DQ,
  ND5, DQ, ND5, DQ, NC5, DH,
  NA5, DQ, NA5, DQ, NG5, DQ, NG5, DQ, NF5, DH, NP, DQ,
  NC5, DQ, NF5, DQ, NF5, DQ, NF5, DQ, NC5, DQ,
  ND5, DQ, ND5, DQ, NC5, DH,
  NA5, DQ, NA5, DQ, NG5, DQ, NG5, DQ, NF5, DH, NP, DQ,
  NC5, DE, NC5, DE, NF5, DQ, NF5, DQ, NF5, DQ,
  NC5, DE, NC5, DE, NF5, DQ, NF5, DQ, NF5, DQ,
  NF5, DE, NF5, DE, NC5, DQ, NF5, DE, NF5, DE, NC5, DQ,
  NF5, DE, NC5, DE, NF5, DE, NC5, DE, NF5, DQ, NF5, DQ, NP, DQ,
  NF5, DQ, NF5, DQ, NF5, DQ, NC5, DQ,
  ND5, DQ, ND5, DQ, NC5, DH,
  NA5, DQ, NA5, DQ, NG5, DQ, NG5, DQ, NF5, DH, NP, DQ,
  NEND
};

const PROGMEM char mamont[] = {
  ND4, DQ, NF4, DQ, NF4, DQ, NF4, DQ, NF4, DH, NG4, DH,
  ND4, DQ, NF4, DQ, NF4, DQ, NF4, DQ, NF4, DH, NP, DQ,
  NAS3, DQ, NG4, DQ, NG4, DQ, NG4, DQ, NG4, DH, NAS4, DH,
  NA4, DQ, NG4, DQ, NF4, DQ, NF4, DQ, NF4, DH,  NP, DQ,
  NAS3, DQ, NAS4, DQ, NA4, DQ, NAS4, DQ, NA4, DH, NG4, DH, NA4, DQ,
  NG4, DH, NF4, DF, NP, DQ,
  NF4, DQ, NA4, DQ, NC4, DQ, ND4, DQ, NDS4, DH,
  NG4, DH, NF4, DQ, NDS4, DH, ND4, DF, NP, DQ,
  ND4, DQ, NG4, DQ, NA4, DQ, NAS4, DQ, NA4, DH, NG4, DH,
  ND4, DQ, NG4, DQ, NA4, DQ, NAS4, DQ, NA4, DH, NG4, DH,
  ND4, DQ, NG4, DQ, NA4, DQ, NAS4, DQ, NA4, DH, NG4, DH,
  ND4, DQ, NF4, DQ, NDS4, DQ, ND4, DQ, NF4, DH, NDS4, DH,
  NG4, DQ, NC5, DQ, NAS4, DQ, NC5, DQ, NAS4, DH, NA4, DH,
  NG4, DQ, NG4, DH, ND4, DF, NP, DQ,
  ND4, DQ, ND4, DQ, NFS4, DQ, NA4, DQ, NC5, DH, NAS4, DH,
  NA4, DQ, NC5, DH, NAS4, DF, NP, DQ,
  NC4, DQ, NC5, DQ, NAS4, DQ, NC5, DQ, NAS4, DH, NA4, DH,
  NG4, DQ, NG4, DH, ND4, DF, NP, DQ,
  ND4, DQ, ND4, DQ, NFS4, DQ, NA4, DQ, NC5, DH, NAS4, DH,
  NA4, DQ, NA4, DH, NG4, DF,
  NEND
};

const PROGMEM char snegurochka[] = {
  NFS4, DQ, NFS4, DQ, NA4, DQ, NA4, DQ,
  NA4, DH, NG4, DQ, NG4, DQ,
  NB4, DH, NB4, DH, NA4, DF,
  NFS4, DQ, NFS4, DQ, NA4, DQ, NA4, DQ,
  NA4, DH, NG4, DQ, NG4, DQ,
  NB4, DH, NB4, DH, NA4, DF,
  NFS4, DQ, NFS4, DQ, NFS4, DQ, NFS4, DQ,
  NFS4, DH, NB3, DQ, NB3, DQ,
  NE4, DH, NE4, DH,
  ND4, DF,
  NB3, DQ, NCS4, DQ, ND4, DQ, ND4, DQ,
  ND4, DH, NG3, DQ, NG3, DQ,
  ND4, DH, NCS4, DH,
  ND4, DQ, NP, DQ, ND4, DH,
  ND4, DH, NAS4, DH,
  NP, DH, NG4, DH,
  NC4, DH, NA4, DH,
  NP, DH, NF4, DH,
  NAS3, DH, NG4, DF,
  NA4, DQ, NG4, DQ, NF4, DH,
  NP, DH, NP, DF,
  NC4, DH, NAS3, DQ, NAS3, DQ,
  NAS3, DH, NP, DH,
  ND4, DH, NC4, DQ, NC4, DQ,
  NC4, DH, NP, DH,
  NE4, DH, ND4, DQ, ND4, DQ,
  NCS4, DH, NB3, DQ, NCS4, DQ,
  ND4, DQ, NP, DQ,
  NEND
};

const PROGMEM char wheels[] = {
  NC4, DH, NF4, DH, NF4, DQ, NF4, DQ,
  NF4, DH, NA4, DH,
  NC5, DH, NA4, DH,
  NF4, DF,
  NG4, DH, NG4, DH, NG4, DF,
  NE4, DH, ND4, DH,
  NC4, DH, NC4, DH,
  NF4, DH, NF4, DQ, NF4, DQ,
  NF4, DH, NA4, DH,
  NC5, DH, NA4, DH, NF4, DF,
  NG4, DF, NC4, DF, NF4, DF,
  NEND
};

const PROGMEM char cherry[] = {
  NG4, DQ, NG4, DQ, NB4, DH,
  NA4, DQ, NFS4, DQ, ND4, DH,
  NG4, DQ, NG4, DQ, NB4, DQ, ND5, DQ,
  NA4, DQ, NFS4, DQ, ND4, DH,
  NG4, DQ, NG4, DQ, NG4, DQ, NA4, DE, NB4, DE,
  NC5, DQ, NC5, DQ, NC5, DQ, NE5, DQ, NE5, DQ,
  ND5, DQ, ND5, DQ, ND4, DQ, NE4, DE,
  NFS4, DE,
  NG4, DQ, NG4, DQ, NG4, DH,
  NG4, DQ, NG4, DQ, NG4, DQ, NA4, DE, NB4, DE,
  NC5, DQ, NC5, DQ, NC5, DQ, NE5, DQ, NE5, DQ,
  ND5, DQ, ND5, DQ, ND4, DQ, NE4, DE,
  NFS4, DE,
  NG4, DQ, NG4, DQ, NG4, DH,
  NEND
};

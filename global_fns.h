// Project:	SIMD
// Entity	Global Functions
// File		globals_fns.h
// Date:	Oct 2005

// Units are declared here to allow forward references between
// them. HASE automatically declares them from the .edl file, but in
// sequence, only allowing backward references.

class Clock;
class acu;
class memory;
class pe2;
class simd2;

int pow(int, int);  // forms exponential without using doubles

struct t_reg_args {
  char type;       // Either R or F
  int  number;     // Register number
  int  index;	   // Offset (if any)
};

class t_reg_args Decode_Register(char *Instruction);

int Decode_LOAD(t_simd_instrn_set Instruction);

int Decode_AMISC(t_simd_instrn_set Instruction);

int Decode_MOVE(t_simd_instrn_set Instruction);

int Decode_ALU(t_simd_instrn_set Instruction);

int Decode_ALUI(t_simd_instrn_set Instruction);

int Decode_JIMM(t_simd_instrn_set Instruction);

int Decode_JREG(t_simd_instrn_set Instruction);

int Decode_BRNC(t_simd_instrn_set Instruction);

int Decode_FLPT(t_simd_instrn_set Instruction);

int Decode_COMP(t_simd_instrn_set Instruction);

int Decode_DBL(t_simd_instrn_set Instruction);

int is_a_function(t_simd_instrn_set Instruction);






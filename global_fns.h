// Project:	SIMD
// Entity	Global Functions
// File		globals_fns.h
// Date:	Oct 2005

int pow(int, int);  // forms exponential without using doubles

t_reg_args Decode_Register(char *Instruction);

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


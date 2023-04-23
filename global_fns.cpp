int pow(int base, int exp)
{
  int res=1;
  for (int i=0; i<exp; i++) 
	res *= base;
  return res;
}

t_reg_args Decode_Register(char *Input_Reg)
{
	t_reg_args new_reg;
	if (Input_Reg[0]=='R')
	  {
    	new_reg.type='R';
        new_reg.number=atoi(Input_Reg+1);
        new_reg.index=0;
          } 
	else if (Input_Reg[0]=='A')
	  {
    	new_reg.type='A';
        new_reg.number=atoi(Input_Reg+1);
        new_reg.index=0;
          }
	else if (Input_Reg[0]=='P')
	  {
    	new_reg.type='P';
        new_reg.number=atoi(Input_Reg+1);
        new_reg.index=0;
          }
	else
	  {new_reg.type='X';}
    return new_reg;
}

int Decode_AMISC(t_simd_instrn_set Instruction)
{
  if (  Instruction.function == t_simd_instrn_set::ALDR
	   )
    return 1;
  return 0;
}


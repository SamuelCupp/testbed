#include "cctk.h" 
#include "cctk_Arguments.h"
#include "cctk_Parameters.h"

void WaveMoL_Energy(CCTK_ARGUMENTS)
{

  DECLARE_CCTK_ARGUMENTS;
      
  int i,j,k;
  int index;

  for (k=0; k<cctk_lsh[2]; k++)
  {
    for (j=0; j<cctk_lsh[1]; j++)
    {
      for (i=0; i<cctk_lsh[0]; i++)
      {
        index = CCTK_GFINDEX3D(cctkGH,i,j,k);
        energy[index] = phit[index]*phit[index] +
          phix[index]*phix[index] +
          phiy[index]*phiy[index] +
          phiz[index]*phiz[index];
      }
    }
  }
  
}

          

#include <stdio.h>
#include <math.h>  
int main()
{
	int usr_input;
	float planck_constant=6.626E-34;
	float c=3.0E+8;
	float wavelength,frequency,energy;
	printf("Enter The Choices \n");
	printf("Enter 1 : To calculate Energy Of Photon from frequency. \n");
	printf("Enter 2 : To calculate Energy Of Photon from Wavelength. \n");
	printf("Enter 3 : To calculate Wavelength Of Photon. \n");
	printf("Enter 4 : To calculate Frequency Of Photon. \n");
	scanf("%d",&usr_input);
	printf("#@Scientfic Notation 6.6 raised to minus 34 should be written like this: 6.6E-34 .\n");
	printf("**All Values must be Entered in Their S.I Units.**\n");
	switch (usr_input)
	{
		case 1:
		printf("Enter The Frequency of Photon (in Hz) \t");
		scanf("%E",&frequency);
		printf("%E Joules",planck_constant*frequency);
		break;
		case 2:
		printf("Enter The Wavelength of Photon (in Hz) \t");
		scanf("%E",&wavelength);
		printf("%E Joules",(planck_constant*c)/wavelength);
		break;
		case 3:
		printf("Enter The Energy of Photon (in Joules) \t");
		scanf("%E",&energy);
		printf("%E metres",(planck_constant*c)/energy);
		break;
		case 4:
		printf("Enter The Energy of Photon (in Joules) \t");
		scanf("%E",&energy);
		printf("%E Hz",planck_constant/energy);
		break;
		default:
		printf("Warning !! Invalid Choice Entered.\n");
	}
	return 0;
}
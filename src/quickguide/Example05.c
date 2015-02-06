int main()
{
	212;         /* Legal */
	215u;        /* Legal */
	0xFeeL;      /* Legal */
	// 078;         /* Illegal: 8 is not an octal digit */
	// 032UU;       /* Illegal: cannot repeat a suffix */
	  
	85;         /* decimal */
	0213;       /* octal */
	0x4b;       /* hexadecimal */
	30;        /* int */
	30u;        /* unsigned int */
	30l;        /* long */
	30ul;       /* unsigned long */
	
	3.14159;       /* Legal */
	314159E-5L;    /* Legal */
	514E+6L;    /* Legal */
	// 510E;          /* Illegal: incomplete exponent */
	// 210f;          /* Illegal: no decimal or exponent */
	// .e55;          /* Illegal: missing integer or fraction */
	12E2F;
	// 12FE2;		 /*Illegal: Expontent has to come first*/
}
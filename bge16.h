#include<string.h>
//TR CHAR
int tr_char (const char harf)
{
	switch(harf)
	{
		case 'a' : return 1;
		break;

		case 'A' : return 1;
		break;

		case 'b' : return 2;
		break;

		case 'B' : return 2;
		break;

		case 'c' : return 3;
		break;

		case 'C' : return 3;
		break;

		case -121 : return 4;
		break;

		case -128 : return 4;
		break;

		case -25 : return 4;
		break;

		case -57 : return 4;
		break;

		case 'd' : return 5;
		break;

		case 'D' : return 5;
		break;

		case 'e' : return 6;
		break;

		case 'E' : return 6;
		break;

		case 'f' : return 7;
		break;

		case  'F': return 7;
		break;

		case 'g' : return 8;
		break;

		case  'G': return 8;
		break;

		case -89 : return 9;
		break;

		case  -90 : return 9;
		break;

		case  -16 : return 9;
		break;

		case  -48 : return 9;
		break;

		case 'h' : return 10;
		break;

		case  'H': return 10;
		break;

		case -115 : return 11;
		break;

		case 'I' : return 11;
		break;

		case -3 : return 11;
		break;

		case 'i' : return 12;
		break;

		case -104 : return 12;
		break;

		case -35 : return 12;
		break;

		case 'j' : return 13;
		break;

		case  'J': return 13;
		break;

		case 'k' : return 14;
		break;

		case  'K': return 14;
		break;

		case 'l' : return 15;
		break;

		case  'L': return 15;
		break;

		case 'm' : return 16;
		break;

		case  'M': return 16;
		break;

		case 'n' : return 17;
		break;

		case  'N': return 17;
		break;

		case 'o' : return 18;
		break;

		case  'O': return 18;
		break;

		case -108 : return 19;
		break;

		case  -103: return 19;
		break;

		case  -10: return 19;
		break;

		case  -42: return 19;
		break;

		case 'p' : return 20;
		break;

		case  'P': return 20;
		break;

		case 'r' : return 21;
		break;

		case  'R': return 21;
		break;

		case 's' : return 22;
		break;

		case  'S': return 22;
		break;

		case -97 : return 23;
		break;

		case -98 : return 23;
		break;

		case -2 : return 23;
		break;

		case -34 : return 23;
		break;


		case 't' : return 24;
		break;

		case 'T' : return 24;
		break;

		case 'u' : return 25;
		break;

		case  'U': return 25;
		break;

		case -127 : return 26;
		break;

		case -102 : return 26;
		break;

		case -4 : return 26;
		break;

		case -36 : return 26;
		break;

		case 'v' : return 27;
		break;

		case  'V': return 27;
		break;

		case 'y' : return 28;
		break;

		case  'Y': return 28;
		break;

		case 'z' : return 29;
		break;

		case 'Z' : return 29;
		break;

		default : return 0;

	}
}
// TR_STRCMP

int  tr_strcmp(const char *a ,const char *b)
{
	int i;
	int kucuk;

	if(strlen(a)<=strlen(b))
	kucuk=strlen(a);

	else
	kucuk=strlen(b);

	for(i=0;i<kucuk;i++)
	{
			if(tr_char(a[i])==tr_char(b[i]))
			{
				if(i==kucuk-1)
				{
					if(strlen(a)==strlen(b))
					return 0;
				}

				else
				continue;
			}

			else if(tr_char(a[i])>tr_char(b[i]))
			return 1;

			else if(tr_char(a[i])<tr_char(b[i]))
			return -1;

	}

}

// TR STRING
void tr_puts(const char *a)
{
	int i;

	for(i=0;i<strlen(a);i++)
	{
		switch(a[i])
		{
			case -121 : printf("%c",-121);
			break;

			case -128 : printf("%c",-128);
			break;

			case -25 : printf("%c",-121);
			break;

			case -57 : printf("%c",-128);
			break;

			case -89 : printf("%c",-89);
			break;

			case  -90 : printf("%c",-90);
			break;

			case  -16 : printf("%c",-89);
			break;

			case  -48 : printf("%c",-90);
			break;

			case -115 : printf("%c",-115);
			break;

			case -3 : printf("%c",-115);
			break;

			case -104 : printf("%c",-104);
			break;

			case -35 : printf("%c",-104);
			break;

			case -108 : printf("%c",-108);
			break;

			case  -103: printf("%c",-103);
			break;

			case  -10: printf("%c",-108);
			break;

			case  -42: printf("%c",-103);
			break;

			case -97 : printf("%c",-97);
			break;

			case -98 : printf("%c",-98);
			break;

			case -2 : printf("%c",-97);
			break;

			case -34 : printf("%c",-98);
			break;

			case -127 : printf("%c",-127);
			break;

			case -102 : printf("%c",-102);
			break;

			case -4 : printf("%c",-127);
			break;

			case -36 : printf("%c",-102);
			break;

			default : printf("%c",a[i]);

		}

	}
}

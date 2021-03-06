/*░░██████ ▓█████▄  ██████▒		creator : Théau NICOLAS							
░░▒██    ▒ ▒██▀  █▌▓██   ▒ 		date : 28/10/2017 15:25:21
░░░ ▓██▄   ░██    ▌▒████ ░ 		name of program : ft_putnbr.c		
░░  ▒   ██▒░▓█▄   ▌░▓█▒  ░ 														
░░▒██████▒▒░██████░ ██░    		----------------------------------------------	
░░▒ ▒▓▒ ▒ ░ ▒▒▓  ▒  ▒░░    		comments :										
░░░ ░▒  ░ ░ ░ ▒  ▒  ░░░     													
░░░  ░  ░   ░ ░  ░  ░ ░    														
░░      ░     ░            														
░░░ 																			*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int conv;
  	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		conv = -nb;
	}
	conv = nb;
	if (conv >= 10)
	{
		ft_putnbr(conv / 10);
		ft_putnbr(conv % 10);
	}
	else
	{
		ft_putchar(conv + '0');
	}
}


int 	main()
{
	ft_putnbr(-2147483648);
	return 0;
}
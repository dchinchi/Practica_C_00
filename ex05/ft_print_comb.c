#include<unistd.h>

void	ft_print_comb(void)
{
	int num[3];
	
	num[0] = '0';
	while(num[0] <= '7')
	{	
		num[1] = num[0] + 1;
		while(num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while(num[2] <= '9')
			{
				write(1, &num[0], 1);
				write(1, &num[1], 1);
				write(1, &num[2], 1);
				num[2]++;
				if(num[0] != '7')
				{
				write(1, ", ", 2);
				}
			}
			num[1]++;
		}	
		num[0]++;
	}			

}	
int main()
{
	ft_print_comb();
	return(0);
}

SPC := "===================="
HSH := "####################"
all:
	@echo $(SPC)
	make object
	make archive
	make clean
object: $(wildcard ft_*.c)
	cc -c $? -Wall -Wextra -Werror
	@echo $(SPC)
archive: $(wildcard ft_*.o)
	rm libft.a
	ar -q libft.a $?
	@echo $(SPC)
norm: $(wildcard ft_*.c)
	norminette $?
clean:
	rm ft_*.o
	@echo $(SPC)
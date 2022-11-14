GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[0;33m
RST = \033[0m

SDIR	= ./src
MDIR	= $(SDIR)/main
UDIR	= $(SDIR)/utils
SORTD	= $(SDIR)/sorting
INSTR	= $(SDIR)/instruct
GDIR	= ./inc/get_next_line

PUDIR	=	$(INSTR)/push
REVDIR	=	$(INSTR)/reverse_rotate
SWADIR	=	$(INSTR)/swap
ROTDIR	=	$(INSTR)/rotate
RRDIR	=	$(INSTR)/reverse_rotate
PSDIR	=	$(INSTR)/push

MSRCS	= main.c checker_correct.c read_all.c
USRCS	= handle_things.c ft_atoi_array.c ft_isdigit.c ft_substr.c ft_split.c ft_atoi.c __init__.c ft_strcmp.c
SWASRCS	= sa.c sb.c ss.c
ROTSRCS	= ra.c rb.c rr.c
RRSRCS	= rra.c rrb.c rrr.c
PSSRCS	= pa.c pb.c utils_push.c
GNL		= get_next_line.c get_next_line_utils.c


OSSRCS	= $(addprefix $(MDIR)/,$(MSRCS))
SRSRCS	= $(addprefix $(SORTD)/,$(SRT))
OUSRCS	= $(addprefix $(UDIR)/,$(USRCS))
SWA		= $(addprefix $(SWADIR)/,$(SWASRCS))
ROT		= $(addprefix $(ROTDIR)/,$(ROTSRCS))
RRT		= $(addprefix $(RRDIR)/,$(RRSRCS))
PSH		= $(addprefix $(PSDIR)/,$(PSSRCS))
GNLSRCS	= $(addprefix $(GDIR)/,$(GNL))

FILES	= $(OSSRCS) $(SRSRCS) $(OUSRCS) $(SWA) $(ROT) $(RRT) $(PSH) $(GNLSRCS)
OBJS	= $(FILES:.c=.o)
CFLAGS	= -Wall -Werror -Wextra
ifeq ($(DEBUG), debug)
	CFLAGS +=  -fsanitize=address -g3
endif
NAME	= checker
CC		= gcc $(CFLAGS)

all: $(NAME)

prnt:
	@echo "$(GREEN)Compiling checker$(RST)"

$(NAME): prnt $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "\n$(GREEN)Done$(RST)"

%.o: %.c
	@printf "$(YELLOW)Generating checker objects %-43.333s\r" $@
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "$(RED)Deleting objects...$(RST)"
	@rm -f $(OBJS)

fclean: clean
	@echo "$(RED)Deleting executable...$(RST)"
	@rm -f $(NAME)
	@rm -f $(OBJS)

re: fclean all

.PHONY:	clean fclean all re prnt
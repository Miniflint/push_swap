SDIR	= ./src
MDIR	= $(SDIR)/main
UDIR	= $(SDIR)/utils
SORTD	= $(SDIR)/sorting
INSTR	= $(SDIR)/instruct

PUDIR	=	$(INSTR)/push
REVDIR	=	$(INSTR)/reverse_rotate
SWADIR	=	$(INSTR)/swap
ROTDIR	=	$(INSTR)/rotate
RRDIR	=	$(INSTR)/reverse_rotate
PSDIR	=	$(INSTR)/push

MSRCS	= main.c checker_correct.c
USRCS	= handle_things.c ft_strlen.c ft_atoi_array.c ft_isdigit.c ft_substr.c ft_split.c ft_atoi.c __init__.c
SWASRCS	= sa.c sb.c ss.c
ROTSRCS	= ra.c rb.c rr.c
RRSRCS	= rra.c rrb.c rrr.c
PSSRCS	= pa.c pb.c utils_push.c


OSSRCS	= $(addprefix $(MDIR)/,$(MSRCS))
SRSRCS	= $(addprefix $(SORTD)/,$(SRT))
OUSRCS	= $(addprefix $(UDIR)/,$(USRCS))
SWA		= $(addprefix $(SWADIR)/,$(SWASRCS))
ROT		= $(addprefix $(ROTDIR)/,$(ROTSRCS))
RRT		= $(addprefix $(RRDIR)/,$(RRSRCS))
PSH		= $(addprefix $(PSDIR)/,$(PSSRCS))

FILES	= $(OSSRCS) $(SRSRCS) $(OUSRCS) $(SWA) $(ROT) $(RRT) $(PSH)
OBJS	= $(FILES:.c=.o)
CFLAGS	= -Wall -Werror -Wextra
ifeq ($(DEBUG), debug)
	CFLAGS +=  -fsanitize=address -g3
endif
NAME	= checker
CC		= gcc $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)\n\nCompiling checker ..."
	@$(CC) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Done"

%.o: %.c
	@echo "$(YELLOW)Generating checker objects..." $@
	@${CC} ${CFLAGS} -c $< -o $@

clean:
	@echo "$(RED)\nDeleting objects..."
	@rm -f $(OBJS)

fclean: clean
	@echo "$(RED)\nDeleting executable..."
	@rm -f $(NAME)
	@rm -f $(OBJS)

re: fclean all

.PHONY:	clean fclean all re
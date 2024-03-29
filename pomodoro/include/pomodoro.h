#ifndef POMODORO
# define POMODORO

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <signal.h>
#include <term.h>
#include <string.h>
#include <strings.h>

#define DEFAULT_WORK_DURATION 25*60
#define DEFAULT_PAUSE_DURATION 5*60
#define DEFAULT_MAX_TOURS 3

#define DEFAULT_WORK_MESSAGE "\033[32mGet to work now !\033[0m"
#define DEFAULT_PAUSE_MESSAGE "\033[32mNow you can rest lil beast\033[0m"

typedef enum	e_phase
{
	WORK,
	PAUSE,
	TAB_END
}				t_phase_types;

typedef struct	s_phase
{
	time_t				duration;
	t_phase_types		type;
	char				*message;
}				t_phase;

void quit(int no);
void loop(t_phase *phase_definition, int *max_tours);
void parse(int argc, char **argv, t_phase *phase_definition, int *max_tours);

#endif

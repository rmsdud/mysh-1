#include "signal_handlers.h"
#include <stdio.h>
#include <signal.h>

void catch_sigint(int signalNo)
{
  if(signalNo==SIGINT)
	printf("\nYour input Ctrl+C\nShell doesn't close.\n");
}

void catch_sigtstp(int signalNo)
{
  if(signalNo==SIGTSTP)
	printf("\nYour input Ctrl+Z, but it doesn't move.\n");
}

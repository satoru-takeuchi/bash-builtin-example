#include <builtins.h>
#include <shell.h>
#include <stdio.h>

static int myhello(WORD_LIST *list) {
	puts("Hello world!");
	fflush(stdout);
	return EXECUTION_SUCCESS;
}

static char *desc[] = {
	"Show a greeting message.",
	"",
	"It's far faster than launching executable file",
	"because it't not necessary to call exec() and fork().",
	(char *)NULL
};

struct builtin myhello_struct = {
	"myhello",		// builtin command name
	myhello,		// function called when issueing this command
	BUILTIN_ENABLED,	// initial flag
	desc,			// long description
	"myhello",		// short description
	0,
};

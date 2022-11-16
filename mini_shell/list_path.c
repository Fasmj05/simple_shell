
danielaloperahernandez
/
simple_shell
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
simple_shell/mini_shell/list_path.c
@DianaKiKaro
DianaKiKaro Add script --_which that looks for files in the current PATH
 2 contributors
20 lines (16 sloc)  308 Bytes
#include "shell.h"

list_p *list_path()
{
        char *token;
	char *path;
	list_p *head;

	head = NULL;
	path = _getenv("PATH");
        token = strtok(path, ":");

        while(token != NULL)
        {
		add_node_end(&head, token);
                token = strtok(NULL, ":");
        }

	return (head);
}

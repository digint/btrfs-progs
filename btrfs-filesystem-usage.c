/*
 * btrfs-filesystem-usage
 *
 * GENERATED BY splitcmd-gen.sh
 */

#include "cmds-fi-usage.c"

/*
 * Dummy object: used from second-level command groups (e.g. in
 * "cmds-subvolume.c"), is never called in splitcmd executables.
 */
int handle_command_group(const struct cmd_group *grp, int argc,
			 char **argv)
{
	exit(1);
}


int main(int argc, char **argv)
{
	return cmd_filesystem_usage(argc, argv);
}

#
# Regular cron jobs for the design-pattern package
#
0 4	* * *	root	[ -x /usr/bin/design-pattern_maintenance ] && /usr/bin/design-pattern_maintenance

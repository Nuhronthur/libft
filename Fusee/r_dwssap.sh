#!/bin/bash
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0'| cut -d: -f1 | rev | sort -r |\
	awk -v offset_down=$FT_LINE1 -v offset_up=$FT_LINE2 'NR>=offset_down &&
	NR<=offset_up{print}' | tr '\n' ',' | rev | cut -c2- | rev |\
	sed 's/$/./g'

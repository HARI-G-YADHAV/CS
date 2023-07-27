if (($# < 2))
then 
	echo "Enter at least 2"
	exit 1
fi
	sorted=($(echo $*|tr ' ' '\n'|sort -n))
	echo "${sorted[@]}"



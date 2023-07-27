BEGIN{
	max=0
	top=0
	FS=","
}
{
	total=$4+$2+$3
	student=$1
	if (total>max)
	{
		max=total
		top=student
	}

}
END{
	print total
	print student
}

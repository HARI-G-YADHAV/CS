BEGIN{
    FS=","
    total=0
    count=0
}
$1 ~/^NA[0-9]{2}(PICS)[0-9]{2}$/{
    mark=$3
    total=total+mark
    count=count+1
}
END{
    avg=total/count
    print avg
}

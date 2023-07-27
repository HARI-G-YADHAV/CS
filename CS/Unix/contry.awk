BEGIN{
    FS=","
    total= 0
}
$2 == "INDIA"{
    print $1
    total=total+$3
}
END{
    print total
}
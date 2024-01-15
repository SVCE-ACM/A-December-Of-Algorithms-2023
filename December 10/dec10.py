def forgot(cmd):
    cmd = cmd.split(" ")
    lower, upper = int(cmd[1].split(",")[1]) , int(cmd[1].split(",")[-1].rstrip(")"))
    a = "Shivanash Kumar"
    b = "Ragul Gupta"
    oa = a[lower-1: upper+1]
    ob = b[lower-1:upper+1]
    if len(oa) >= len(ob) and len(oa) >= 23:
        l = len(oa)
    elif len(ob) >= len(oa) and len(ob) >= 23:
        l = len(ob)
    else:
        l = 23
    print("+"+"-"*l+"+")
    print(f"| substring(empname,{lower},{upper})"+" "*(l-23)+"|")
    print(f"| {oa}"+" "*(l-len(oa)-1)+ "|")
    print(f"| {ob}"+" "*(l-len(ob)-1)+"|")
    print("+"+"-"*l+"+")
forgot("select substring(empname,2,2) from emp;")



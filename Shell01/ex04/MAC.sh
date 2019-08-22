ifconfig -a | grep "ether" | sed "s/[[:blank:]]//g" | cut -c6-

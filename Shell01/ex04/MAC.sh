ifconfig -a | grep -F ether | rev | cut -d ' ' -f6 | rev

cat $1 | grep -i "Nicholas	Bauer" | awk "{print $(NF - 1)}"

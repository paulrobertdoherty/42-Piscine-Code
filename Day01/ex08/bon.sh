ldapsearch -x -L "(cn=*bon*)" cn | grep "numResponses: " | cut -d ":" -f 2 | cut -d " " -f 2

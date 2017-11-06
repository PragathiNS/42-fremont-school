echo `ldapsearch -Q sn="*bon*" | grep "^sn:" | sed 's/sn: //' | wc -l`

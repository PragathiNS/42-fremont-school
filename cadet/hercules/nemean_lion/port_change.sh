cat /etc/ssh/sshd_config | sed 's/\#Port 22/Port 7777/' > /etc/ssh/sshd_config_1
cp /etc/ssh/sshd_config_1 /etc/ssh/sshd_config
service sshd restart

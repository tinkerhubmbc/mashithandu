#! /bin/bash
#Author:Brijith@pr3dat0r
#Subdomain Enumeration

day=(date +%A)
echo "Welcome $USER ! Today is $day.You are using $SHELL for script execution."
dom=$1

for rec in  A AAAA CNAME MX TXT;do
  echo "$rec record of $dom"
  dig $dom $rec +short
  echo "--------------------------"
done

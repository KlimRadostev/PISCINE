#!/bin/bash
ldapsearch -Q "(sn=*bon*)" | grep -i "sn: " | wc -l | sed "s/ //g"

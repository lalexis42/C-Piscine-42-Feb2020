#! /bin/sh
ifconfig -a link | grep ether | cut -d ' ' -f 2
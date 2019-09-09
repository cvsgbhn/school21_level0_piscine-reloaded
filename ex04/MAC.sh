#!/bin/sh
ifconfig -a | grep ether | sed 's/^[ \t]*//;s/[ \t]*$//' | awk '{print $2}'

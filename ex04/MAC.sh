#!/bin/bash/
ifconfig -a | grep ether | cut -d " " -f 2

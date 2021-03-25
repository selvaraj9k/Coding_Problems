#!/bin/bash
#https://www.hackerrank.com/challenges/text-processing-in-linux-the-uniq-command-3/problem

#uniq -ic | tr -s ' ' | cut -c 2-
#uniq -ic | tr -s " " | cut -c 2-
uniq -ic | tr -s [:space:] | cut -c 2-


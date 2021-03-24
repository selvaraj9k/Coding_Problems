#!/bin/bash

#https://www.hackerrank.com/challenges/text-processing-in-linux-the-uniq-command-2/problem

#uniq -c | tr -s ' '| cut -c 2-
uniq -c | tr -s [:space:] | cut -c 2-

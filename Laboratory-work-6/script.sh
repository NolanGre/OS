#!/bin/bash
awk 'BEGIN{FS=":"} NR <=120 && /^s/ {print $5}' /etc/passwd

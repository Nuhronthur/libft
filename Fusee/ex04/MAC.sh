#!/bin/bash
ifconfig | grep -w ether | cut -c8-

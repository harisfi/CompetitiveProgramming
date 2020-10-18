#!/bin/ruby

require 'json'
require 'stringio'

arr = [0]
n = gets.to_i
satu = 0
while true
    break if n <= 0
    if n%2 == 1
        satu += 1
    else
        arr.append(satu)
        satu = 0
    end
    n /= 2
end
arr.append(satu)
arr.sort!
puts arr[arr.length-1]
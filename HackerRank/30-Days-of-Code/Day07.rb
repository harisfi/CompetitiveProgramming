#!/bin/ruby

require 'json'
require 'stringio'

n = gets.to_i

arr = gets.rstrip.split(' ').map(&:to_i)
i = arr.length - 1
s = ""
while i >= 0
    s += "#{arr[i]} "
    i -= 1
end

puts s

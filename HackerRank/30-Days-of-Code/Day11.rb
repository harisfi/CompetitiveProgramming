#!/bin/ruby

require 'json'
require 'stringio'



arr = Array.new(6)

6.times do |i|
    arr[i] = gets.rstrip.split(' ').map(&:to_i)
end

total = -(2**(0.size * 8 -2))
i = 0
while true
    break if i >= 4
    j = 0
    while true
        break if j >= 4
        a = arr[i][j]
        b = arr[i][j+1]
        c = arr[i][j+2]
        d = arr[i+1][j+1]
        e = arr[i+2][j]
        f = arr[i+2][j+1]
        g = arr[i+2][j+2]
        x = a+b+c+d+e+f+g
        if x > total
            total = x
        end
        j += 1
    end
    i += 1
end
puts total

#!/bin/ruby

require 'json'
require 'stringio'



N = gets.to_i
if N % 2 == 0
    if N >= 2 and N <= 5
        puts 'Not Weird'
    elsif N >= 6 and N <= 20
        puts 'Weird'
    elsif N > 20
        puts 'Not Weird'
    end
else
    puts 'Weird'
end

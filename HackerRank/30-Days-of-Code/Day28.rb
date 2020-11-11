#!/bin/ruby

require 'json'
require 'stringio'

names = Array.new
N = gets.to_i

N.times do
    firstNameEmailID = gets.rstrip.split
    firstName = firstNameEmailID[0].to_s.rstrip
    emailID = firstNameEmailID[1].to_s.rstrip
    domain = firstNameEmailID[1].to_s.split('@')[1]
    if (domain == 'gmail.com')
        names.push(firstName)
    end
end
urut = names.sort
for i in 0..names.count-1
    puts "#{urut[i]}"
end

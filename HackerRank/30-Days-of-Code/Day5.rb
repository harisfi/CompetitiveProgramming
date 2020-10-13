#!/bin/ruby

require 'json'
require 'stringio'

n = gets.to_i
i = 1
while i <= 10
    puts "#{n} x #{i} = #{n*i}"
    i+=1
end

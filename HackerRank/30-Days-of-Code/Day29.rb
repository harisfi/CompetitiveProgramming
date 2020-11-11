#!/bin/ruby

require 'json'
require 'stringio'

t = gets.to_i

t.times do |t_itr|
    nk = gets.rstrip.split
    n = nk[0].to_i
    k = nk[1].to_i
    if (((k-1) | k) <= n) then puts (k-1) else puts (k-2) end
end
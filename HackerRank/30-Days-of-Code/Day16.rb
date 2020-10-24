#!/bin/ruby

S = gets.strip
begin
    i = S.to_i
    s = i.to_s
    
    raise 'Bad String' unless S == s
    puts s
rescue StandardError => e
    puts e.message
    e.backtrace.inspect
end

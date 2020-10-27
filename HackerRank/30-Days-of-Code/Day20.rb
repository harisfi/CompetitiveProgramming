#!/bin/ruby

n = gets.strip.to_i
a = gets.strip
a = a.split(' ').map(&:to_i)

swaps = 0
for i in 0..(n-1)
    for j in 0..(n-2)
        if a[j] > a[j+1]
            a[j], a[j+1] = a[j+1], a[j]
            swaps += 1
        end
    end

    if swaps < 1
        break
    end
end

puts "Array is sorted in #{swaps} swaps."
puts "First Element: #{a[0]}"
puts "Last Element: #{a[n-1]}"

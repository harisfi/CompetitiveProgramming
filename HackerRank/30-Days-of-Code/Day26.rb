actualDate = gets.rstrip.split(' ').map(&:to_i)
expectedDate = gets.rstrip.split(' ').map(&:to_i)

if ((actualDate[2] == expectedDate[2]) &&
    (actualDate[1] == expectedDate[1]) &&
    (actualDate[0] <= expectedDate[0]))
    puts 0
elsif ((actualDate[2] == expectedDate[2]) &&
    (actualDate[1] == expectedDate[1]) &&
    (actualDate[0] > expectedDate[0]))
    puts 15 * (actualDate[0] - expectedDate[0])
elsif ((actualDate[2] == expectedDate[2]) &&
    (actualDate[1] > expectedDate[1]))
    puts 500 * (actualDate[1] - expectedDate[1])
elsif ((actualDate[2] > expectedDate[2]))
    puts 10000
else
    puts 0
end

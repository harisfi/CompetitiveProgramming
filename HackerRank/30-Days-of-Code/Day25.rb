require 'prime'

def prima(x)
    return 'Prime' if (Prime.prime?(x))
    return 'Not prime'
end

t = gets.to_i
i = 0
while 1
    break if (i==t)
    n = gets.to_i
    puts prima(n)
    i += 1
end

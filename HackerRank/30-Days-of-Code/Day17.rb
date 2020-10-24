class RangeError < StandardError
end
class Calculator
    def power(n, p)
        raise RangeError, 'n and p should be non-negative' unless (n>-1)&(p>-1)
        return n**p
    end
end


myCalculator = Calculator.new()

t = gets.to_i

for i in 1..t
    n, p = gets.split.map(&:to_i)
    begin
        ans = myCalculator.power(n, p)
        puts ans.to_i
    rescue RangeError => e
        puts e.message
    end
end
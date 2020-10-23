# Enter your code here. Read input from STDIN. Print output to STDOUT
n = gets.to_i
i = 0
hashs = Hash.new
while true
    break if i >= n
    s = gets.split
    hashs[s[0]] = s[1]
    i += 1
end

i = 0
while true
    s = gets
    break if s == nil
    s = s.strip
    if hashs[s] != nil
        puts "#{s}=#{hashs[s]}"
    else
        puts "Not found"
    end
end

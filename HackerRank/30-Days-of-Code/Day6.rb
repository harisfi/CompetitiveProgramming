# Enter your code here. Read input from STDIN. Print output to STDOUT
t = gets.to_i

i = 0
while i < t
    s = gets.strip
    j = 0
    s2 = ""
    while j < s.length
        s2 += s[j]
        j+=2
    end
    j = 1
    s2 += " "
    while j < s.length
        s2 += s[j]
        j+=2
    end
    puts s2
    i+=1
end
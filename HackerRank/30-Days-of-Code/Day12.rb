

class Student <Person
    #   Class Constructor
    #   
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores.
    #
    # Write your constructor here
    def initialize(firstName, lastName, id, scores)
        @firstName = firstName
        @lastName = lastName
        @id = id
        @scores = scores
    end
    def calculate()
        i = 0
        sum = 0
        while true
            break if i > @scores.length-1
            sum += @scores[i]
            i += 1
        end
        val = sum/@scores.length
        case val
            when 90..100 then return "O"
            when 80..89 then return "E"
            when 70..79 then return "A"
            when 55..69 then return "P"
            when 40..54 then return "D"
            when 0..39 then return "T"
        end
    end
    #   Function Name: calculate
    #   Return: A character denoting the grade.
    #
    # Write your function here
    
end


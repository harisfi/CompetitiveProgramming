class Person
    attr_accessor :age
    def initialize(initialAge)
        # Add some more code to run some checks on initialAge  
        @age = 0     
        if initialAge < 0
            puts 'Age is not valid, setting age to 0.'
        else
            @age = initialAge
        end
    end
    def amIOld()
      # Do some computations in here and print out the correct statement to the console
      case age
        when 0..12
            puts 'You are young.'
        when 13..17
            puts 'You are a teenager.'
        else
            puts 'You are old.'
      end
    end
    def yearPasses()
      # Increment the age of the person in here
      @age += 1
    end
end

T=gets.to_i
for i in (1..T)do
    age=gets.to_i
    p=Person.new(age)
    p.amIOld()
    for j in (1..3)do
        p.yearPasses()
    end
    p.amIOld
  	puts ""
end      

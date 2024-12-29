def solve
    n = gets.to_i
    s = gets.chomp
    puts s[0] != s[-1] ? "Yes" : "No"
  end
  
  def main
    t = gets.to_i
    t.times do
      solve
    end
  end
  
  main
  
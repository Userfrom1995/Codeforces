def gcd(a, b)
    b == 0 ? a : gcd(b, a % b)
  end
  
  def lcm(a, b)
    (a / gcd(a, b)) * b
  end
  
  def solve
    n, q = gets.split.map(&:to_i)
    v = gets.split.map(&:to_i)
  
    mp = Hash.new(0)
  
    n.times do |i|
      if i == n - 1
        mp[i] += 1
      else
        totSeg = (n - i - 1) + (i * (n - i))
        mp[totSeg] += 1
        remaining_integer = v[i + 1] - v[i] - 1
        second_seg = ((i + 1) * (n - i - 1))
        mp[second_seg] += remaining_integer
      end
    end
  
    ans = []
    
    q.times do
      x = gets.to_i
      ans.push(mp[x])
    end
  
    puts ans.join(" ")
  end
  
  # Main program
  tt = gets.to_i
  tt.times { solve }
  
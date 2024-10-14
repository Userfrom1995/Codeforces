using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main() 
    {
        int t = int.Parse(Console.ReadLine()); // Number of test cases
        
        while (t-- > 0) 
        {
            // Read n and k
            string[] input = Console.ReadLine().Split();
            int n = int.Parse(input[0]);
            int k = int.Parse(input[1]);
            k = 2 * k;
            
            // Read the array 'a'
            List<int> a = Console.ReadLine().Split().Select(int.Parse).ToList();
            
            // Occurrence array to track how many times each number from 1 to n appears
            int[] occ = new int[n + 1];
            for (int i = 0; i < n; i++) 
            {
                occ[a[i]]++;
            }
            
            // Three groups: g0 for numbers not in the array, g1 for numbers appearing once, and g2 for numbers appearing twice
            List<int> g0 = new List<int>();
            List<int> g1 = new List<int>();
            List<int> g2 = new List<int>();
            
            // Classify the numbers into g0, g1, and g2 based on their occurrence
            for (int i = 1; i <= n; i++) 
            {
                if (occ[i] == 0) 
                {
                    g0.Add(i);
                } 
                else if (occ[i] == 1) 
                {
                    g1.Add(i);
                } 
                else 
                {
                    g2.Add(i);
                }
            }
            
            int v = 0;
            // Print elements from group g2 (which appear twice)
            foreach (var x in g2) 
            {
                if (v < k) 
                {
                    v += 2;
                    Console.Write(x + " " + x + " ");
                }
            }
            
            // Print elements from group g1 (which appear once)
            foreach (var x in g1) 
            {
                if (v < k) 
                {
                    v++;
                    Console.Write(x + " ");
                }
            }
            
            Console.WriteLine(); // Newline after the first group
            
            v = 0;
            // Print elements from group g0 (which don't appear)
            foreach (var x in g0) 
            {
                if (v < k) 
                {
                    v += 2;
                    Console.Write(x + " " + x + " ");
                }
            }
            
            // Print remaining elements from group g1 if needed
            foreach (var x in g1) 
            {
                if (v < k) 
                {
                    v++;
                    Console.Write(x + " ");
                }
            }
            
            Console.WriteLine(); // Newline after the second group
        }
    }
}

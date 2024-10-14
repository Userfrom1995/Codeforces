using System;
using System.Linq;

class Program
{
    static long CeilDiv(long a, long b)
    {
        return (a + b - 1) / b;
    }

    static void Solve()
    {
        int n = int.Parse(Console.ReadLine());
        int x = int.Parse(Console.ReadLine());

        long[] a = Array.ConvertAll(Console.ReadLine().Split(), long.Parse);

        long totalCars = a.Sum();
        long maxCars = a.Max();

        long minCustomers = Math.Max(CeilDiv(totalCars, x), maxCars);

        Console.WriteLine(minCustomers);
    }

    static void Main()
    {
        int t = int.Parse(Console.ReadLine());
        for (int i = 0; i < t; i++)
        {
            Solve();
        }
    }
}

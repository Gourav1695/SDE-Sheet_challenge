public class Solution
{
    private const int Modulo = 1_000_000_007;
    private int[,] _dp;
    private int[] _locations;

    public int CountRoutes(int[] locations, int start, int finish, int fuel)
    {
        _locations = locations;
        _dp = new int[locations.Length, fuel + 1];

        for (var i = 0; i < locations.Length; i++)
        {
            for (var j = 0; j < fuel + 1; j++)
            {
                _dp[i, j] = -1;
            }
        }

        return dfs(start, finish, fuel);
    }

    private int dfs(int i, int finish, int fuel)
    {
        var n = _locations.Length;
        if (fuel < 0)
        {
            return 0;
        }

        if (_dp[i, fuel] != -1)
        {
            return _dp[i, fuel];
        }

        var ans = 0;

        if (i == finish)
        {
            ans++;
        }

        for (var j = 0; j < n; j++)
        {
            if (j == i)
            {
                continue;
            }

            ans = (ans + dfs(j, finish, fuel - Math.Abs(_locations[i] - _locations[j]))) % Modulo;
        }

        return _dp[i, fuel] = ans;
    }
}

1. Reverse string without built-in function:
  string input = "Hello";
  string result = "";
 for (int i = input.Length - 1; i >= 0; i--)
{
    result += input[i];
}
Console.WriteLine(result);

2. Remove duplicate characters from string:

string input = "programming";
string output = new string(input.Distinct().ToArray());
Console.WriteLine(output);

3.Count occurrences of each character:

string s = "hello";
var result = s.GroupBy(x => x)
              .Select(g => new { Char = g.Key, Count = g.Count() });

foreach (var item in result)
    Console.WriteLine(item.Char + " = " + item.Count);

using System.Collections.Generic;


int[] aux = new int[] {1,2,3,4,5,6,7,8,9,10,11,12};
List<int> numbers = new List<int>(aux);

List<int> numpar = numbers.FindAll(x%2 == 0);

foreach(int num in numpar){
    Console.WriteLine(num);
}
/*

Bubble Sort is the simplest sorting algorithm that works by
repeatedly swapping the adjacent elements if they are in wrong order.

complexity - n(n+1)/2

5 4 3 2 1
4 5 3 2 1
4 3 2 5 1
4 3 2 1 5

4 3 2 1 5
3 4 2 1 5
3 2 4 1 5
3 2 1 4 5

3 2 1 4 5
2 3 1 4 5
2 1 3 4 5

2 1 3 4 5
1 2 3 4 5

hence ,we got the sorted array

while(n-1 times) {
    pairwise swapping of elements 0 to n-2-i.
}

*/

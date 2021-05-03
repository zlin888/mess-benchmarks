package main

import (
	"time"
	"fmt"
)

func main() {
	a := make([]int, 100)
	b := make([]int, 100)
	c := make([]int, 100)

	for i := 0; i < 100; i++ {
		a[i] = i;
		b[i] = i;
		c[i] = i;
	}
	var r []int
	start := time.Now()
	for i := 0; i < 1000000; i++ {
		r = add(add(a,b), c);
	}
	end := time.Now()

	fmt.Println(end.Sub(start))
	fmt.Println(r)
}

func add(a, b []int) []int {
	r := make([]int, 100)
	for i := 0; i < 100; i++ {
		r[i] = a[i] + b[i]
	}
	return r
}
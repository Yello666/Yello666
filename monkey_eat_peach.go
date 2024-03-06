package main
import (
	"fmt"
	_"math"
)

func p(n int) int{
	if n==10 {
	return 1
	} else {
		return (p(n+1)+1)*2
	}
}

func main(){

	fmt.Printf("%d ",p(1))
}
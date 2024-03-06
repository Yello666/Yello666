package main
import(
	"fmt"

)
func main(){
	var a=100
	var b=80
	var c=900
	var max int
	// if a>b {
	// 	if a>c{
	// 		fmt.Printf("max=a=%d",a)
	// 	} else{
	// 		fmt.Printf("max=c=%d",c)
	// 	}
	// }
	// if b>a {
	// 	if b>c{
	// 		fmt.Printf("max=b=%d",b)
	// 	} else{
	// 		fmt.Printf("max=c=%d",c)
	// 	}
	// }
	// if b==a{
	// 	if b>c{
	// 		fmt.Printf("max=a=b=%d",a)
	// 	} else{
	// 		fmt.Printf("max=c=%d",c)
	// 	}
	// }

	//新思路：求出两个数的最大值再与第三个数比较
	if a>b {
		max=a
	} else{
		max=b
	}
	if c>max {
		max=c
	}
	fmt.Printf("max=%d",max)
	
}
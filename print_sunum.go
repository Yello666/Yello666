package main
import(
	"fmt"
	_"math"

)
func main(){
	j:=1
	flag:=0
	sum:=0
	count:=0
	for i := 1; i <=100; i++ {
		flag=0
		for j = 1; j <i; j++ {
			if i%j==0&&j!=1 {
				flag=1
				break
				
			}
		}
		if flag==0||i==1 {
			fmt.Printf("%d ",i)
			count++
			sum+=i
		}
		if count%5==0&&count!=0 {
			count=0
			fmt.Printf(" sum=%d",sum)
			fmt.Printf("\n")
		}
	}
}